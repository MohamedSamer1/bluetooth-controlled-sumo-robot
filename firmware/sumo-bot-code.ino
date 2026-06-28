#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// --- PIN MAPPING ---
const int ENA = 13; const int IN1 = 12; const int IN2 = 14;
const int IN3 = 27; const int IN4 = 26; const int ENB = 25;
const int buzzer = 33; // Buzzer Pin

void setup() {
  Serial.begin(115200);
  SerialBT.begin("Jason_Joystick"); 
  
  pinMode(ENA, OUTPUT); pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT); pinMode(ENB, OUTPUT);
  pinMode(buzzer, OUTPUT);

  // Startup Beep to confirm buzzer works
  tone(buzzer, 2500, 200); 
}

void loop() {
  if (SerialBT.available()) {
    String data = SerialBT.readStringUntil('\n');
    data.trim();
    data.toUpperCase();

    // --- CHECK FOR BUZZER COMMAND 'Y' ---
    if (data.indexOf('Y') > -1) {
      // 2500Hz is usually the loudest frequency for piezo buzzers
      tone(buzzer, 2500, 500); 
    }

    if (data.length() >= 6) {
      char driveDir = data[0]; 
      int driveSpeed = data.substring(1, 3).toInt();
      char turnDir = data[3];
      int turnAmount = data.substring(4, 6).toInt();

      int maxSpeed = 255; 
      int drivePWM = map(driveSpeed, 0, 99, 0, maxSpeed);
      int turnPWM = map(turnAmount, 0, 99, 0, maxSpeed);

      int leftSpeed, rightSpeed;

      if (driveSpeed < 10 && turnAmount > 10) {
        if (turnDir == 'R') {
          setDirections('B', 'F'); 
          leftSpeed = turnPWM; rightSpeed = turnPWM;
        } else {
          setDirections('F', 'B'); 
          leftSpeed = turnPWM; rightSpeed = turnPWM;
        }
      } 
      else {
        char actualDir = (driveDir == 'F') ? 'B' : 'F';
        setDirections(actualDir, actualDir);

        if (turnDir == 'L') { 
          leftSpeed = drivePWM;
          rightSpeed = drivePWM - turnPWM; 
        } else {
          leftSpeed = drivePWM - turnPWM;
          rightSpeed = drivePWM;
        }
      }

      analogWrite(ENA, constrain(leftSpeed, 0, maxSpeed));
      analogWrite(ENB, constrain(rightSpeed, 0, maxSpeed));
      
      if (driveSpeed == 0 && turnAmount == 0) stopMotors();
    }
  }
}

void setDirections(char motLeft, char motRight) {
  if (motLeft == 'F') { digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW); }
  else { digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH); }

  if (motRight == 'F') { digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH); }
  else { digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW); }
}

void stopMotors() {
    digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
    analogWrite(ENA, 0); analogWrite(ENB, 0);
}