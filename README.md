<p align="center">
    <img src="images/hero-banner.png" alt="Bluetooth-Controlled Sumo Robot" width="100%">
</p>

<h1 align="center">🤖 Bluetooth-Controlled Sumo Robot</h1>

<p align="center">
A high-performance ESP32-powered sumo robot engineered for competitive robotics.<br>
Designed through a complete engineering workflow including mechanical design,
embedded systems, electronics integration, mathematical modeling, and system validation.
</p>

<p align="center">

<img src="https://img.shields.io/badge/ESP32-333333?style=for-the-badge">
<img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white">
<img src="https://img.shields.io/badge/Autodesk%20Inventor-E34F26?style=for-the-badge&logo=autodesk&logoColor=white">
<img src="https://img.shields.io/badge/KiCad-314CB0?style=for-the-badge">
<img src="https://img.shields.io/badge/Proteus-1C79B3?style=for-the-badge">
<img src="https://img.shields.io/badge/MATLAB-0076A8?style=for-the-badge">
<img src="https://img.shields.io/badge/Simulink-FF6600?style=for-the-badge">

</p>

---

# 📑 Table of Contents

- [📖 Project Overview](#-project-overview)
- [🎯 Design Objectives](#-design-objectives)
- [📋 Engineering Requirements](#-engineering-requirements)
- [🏗️ System Architecture](#️-system-architecture)
- [⚙️ Mechanical Design](#️-mechanical-design)
- [🔌 Electronics Design](#-electronics-design)
- [🧠 Control System](#-control-system)
- [💻 Software Implementation](#-software-implementation)
- [📐 Engineering Calculations](#-engineering-calculations)
- [🖼️ CAD Gallery](#️-cad-gallery)
- [🧪 Simulation & Validation](#-simulation--validation)
- [🤖 Final Prototype](#-final-prototype)
- [📊 Results & Discussion](#-results--discussion)
- [🚧 Challenges](#-challenges)
- [🚀 Future Improvements](#-future-improvements)
- [📁 Repository Structure](#-repository-structure)
- [📚 References](#-references)
- [👨‍💻 Team](#-team)
- [📄 License](#-license)

---

# 📖 Project Overview

## Background

Sumo robotics is a competitive field that combines **mechanical engineering**, **embedded systems**, **electronics**, and **control theory** to produce robots capable of pushing opponents outside a circular arena while maintaining stability, traction, and responsiveness.

This project was developed as part of the **Mechatronics Design** course at **Modern Sciences and Arts University (MSA University)**. The objective was to design and manufacture a fully functional Bluetooth-controlled sumo robot while applying the complete engineering design process—from concept development and analytical calculations to CAD modeling, electronics integration, programming, simulation, manufacturing, and experimental testing.

Unlike many educational robotics projects that focus solely on programming, this project emphasizes multidisciplinary engineering by integrating mechanical design, power transmission, embedded programming, system modeling, and design validation into a single robotic platform.

---

## Project Summary

The robot utilizes an **ESP32 microcontroller** as its primary controller, communicating wirelessly with a smartphone via Bluetooth. Differential drive locomotion enables precise maneuverability using two independently controlled DC motors, while a low-profile wedge chassis maximizes pushing capability during competition.

The complete engineering workflow included:

- Mechanical design using Autodesk Inventor
- Differential-drive robot modeling
- Embedded firmware development
- Bluetooth communication
- Electronic circuit design
- Power system analysis
- MATLAB & Simulink modeling
- Proteus simulation
- Physical assembly and testing

The final prototype successfully demonstrated stable wireless control, efficient motor response, and competitive maneuverability while meeting the project's design objectives.

---

# 🎯 Design Objectives

The primary objective of this project was to design and manufacture a compact, reliable, and high-performance Bluetooth-controlled sumo robot capable of competing in a robotic sumo environment.

The engineering goals included:

- Design a lightweight yet structurally rigid chassis.
- Maximize pushing force while maintaining stability.
- Reduce response delay during wireless control.
- Develop an intuitive Bluetooth communication system.
- Implement efficient differential-drive motion control.
- Integrate all electronic components within a compact footprint.
- Validate the design through simulation and experimental testing.
- Apply engineering calculations throughout the design process.

---

# 📋 Engineering Requirements

The robot was designed according to the following engineering requirements.

| Requirement | Target |
|--------------|---------|
| Stable Bluetooth Communication | ✅ Required |
| High Pushing Force | ✅ Required |
| Low Center of Gravity | ✅ Required |
| Compact Dimensions | ✅ Required |
| Fast Response Time | ✅ Required |
| Reliable Differential Drive | ✅ Required |
| Easy Maintenance | ✅ Required |
| Robust Mechanical Structure | ✅ Required |

The final design was evaluated against these requirements throughout the development process to ensure that mechanical, electrical, and software subsystems operated as a unified mechatronic system.

---

# 🏗️ System Architecture

The robot follows a modular mechatronic architecture composed of four primary subsystems:

```text
 Smartphone
      │
 Bluetooth
      │
    ESP32
      │
Motor Driver
      │
 DC Motors
      │      │
 Robot Motion
```

### Mechanical Subsystem

- Custom CAD chassis
- Low-profile wedge
- Differential-drive wheel configuration
- Optimized weight distribution

### Electrical Subsystem

- ESP32 microcontroller
- Motor driver
- Rechargeable battery pack
- DC geared motors
- Wireless Bluetooth communication

### Software Subsystem

- Arduino firmware
- Bluetooth communication protocol
- Differential-drive control logic
- PWM motor control

### Validation Subsystem

- MATLAB calculations
- Simulink modeling
- Proteus simulation
- Experimental testing

---

> 💡 **Engineering Focus**
>
> Rather than treating the robot as an electronics project alone, this work follows a complete mechatronic engineering workflow where mechanical design, electronics, embedded programming, simulation, and validation are developed together to achieve a balanced and competitive robotic platform.

---

# ⚙️ Mechanical Design

## Design Philosophy

The mechanical design of the robot was driven by three primary objectives:

- Maximize pushing capability
- Maintain a low center of gravity
- Minimize overall weight while preserving structural rigidity

Rather than designing only for aesthetics, every mechanical component was selected or designed to improve the robot's performance during sumo matches.

---

## Chassis Design

The chassis was designed in **Autodesk Inventor** using a modular approach that simplifies manufacturing, assembly, and maintenance.

### Design Considerations

- Low-profile geometry to slide underneath opponents.
- Compact footprint for improved maneuverability.
- Symmetrical weight distribution.
- Easy access to electronics.
- Rigid structure capable of withstanding impact loads.

<p align="center">
<img src="images/cad-render.png" width="85%">
</p>

> **Figure 1:** Complete CAD assembly of the Bluetooth-Controlled Sumo Robot.

---

## Wedge Design

One of the most important components in a sumo robot is the front wedge.

The wedge was designed to:

- Lift the opponent's front wheels.
- Reduce the opponent's traction.
- Transfer pushing force efficiently.
- Prevent direct frontal collisions with the chassis.

The attack angle was selected to maximize engagement while maintaining ground clearance during movement.

<p align="center">
<img src="images/front-view.png" width="70%">
</p>

---

## Wheel Configuration

The robot utilizes a **differential-drive** configuration consisting of:

- Two independently driven DC motors
- One free-rotating caster wheel
- High-traction drive wheels

This configuration offers:

- Zero-radius turning
- Simple control architecture
- High maneuverability
- Reliable navigation inside the sumo arena

<p align="center">
<img src="images/exploded-view.png" width="90%">
</p>

---

## Weight Distribution

Weight distribution plays a critical role in sumo robotics.

The battery pack was intentionally positioned close to the drive wheels to increase the normal force acting on the tires, thereby improving traction and maximizing the available pushing force.

Heavy components such as the motors and battery were placed as low as possible to reduce the center of gravity and improve stability during aggressive pushing.

---

## Mechanical Highlights

- ✅ Low-profile wedge chassis
- ✅ Modular mechanical assembly
- ✅ Lightweight construction
- ✅ Optimized center of gravity
- ✅ High traction wheel placement
- ✅ Compact mechanical layout

---

# 🔌 Electronics Design

The electronic system was designed to provide reliable wireless control while delivering sufficient power to the drive motors.

The design consists of four major subsystems:

- Control
- Power
- Motor Drive
- Communication

---

## System Components

| Component | Function |
|------------|----------|
| ESP32 | Main controller |
| L298N Motor Driver | Motor power control |
| DC Geared Motors | Robot propulsion |
| Li-ion Battery Pack | Power supply |
| Bluetooth | Wireless communication |

---

## Electronic Architecture

```text
Battery
   │
   ▼
L298N Motor Driver
   ▲
   │
ESP32 Controller
   ▲
Bluetooth Communication
   ▲
Smartphone
```

---

## ESP32 Controller

The ESP32 serves as the central processing unit of the robot.

Its responsibilities include:

- Reading Bluetooth commands
- Processing user input
- Generating PWM signals
- Controlling motor direction
- Coordinating differential-drive movement

The ESP32 was selected because it provides:

- Built-in Bluetooth
- High processing performance
- Low power consumption
- Multiple PWM outputs
- Excellent Arduino ecosystem support

---

## Motor Driver

The robot uses an **L298N dual H-Bridge motor driver**.

Its primary functions include:

- Bidirectional motor control
- PWM speed regulation
- Independent left/right motor control
- High-current switching

---

## Power System

The robot is powered by a rechargeable Li-ion battery pack.

The power system was designed to provide:

- Stable voltage
- High current capability
- Long operating duration
- Reliable performance under heavy motor loads

Power calculations were performed during the design phase to verify that the selected battery could safely support the expected current consumption.

---

## Circuit Design

The electrical circuit was first developed and validated using **Proteus**, allowing verification of wiring and motor control logic before physical assembly.

The PCB and schematic were then organized using **KiCad**, ensuring a clean and maintainable electrical design.

<p align="center">
<img src="images/schematic.png" width="85%">
</p>

> **Figure 2:** Electrical schematic of the control system.

---

# 🧠 Control System

The robot utilizes a **Bluetooth-based differential-drive control system**.

The operator sends movement commands from a smartphone application.

These commands are transmitted wirelessly to the ESP32, which interprets the incoming data and generates the appropriate PWM signals for each motor.

---

## Differential Drive

Robot motion is achieved by independently controlling the left and right motors.

| Left Motor | Right Motor | Motion |
|------------|-------------|---------|
| Forward | Forward | Forward |
| Reverse | Reverse | Backward |
| Forward | Reverse | Rotate Right |
| Reverse | Forward | Rotate Left |
| Stop | Stop | Stop |

This control strategy enables smooth turning, rapid maneuverability, and precise positioning inside the sumo arena.

---

## Motion Flow

```text
Smartphone

↓

Bluetooth

↓

ESP32

↓

Motor Driver

↓

DC Motors

↓

Robot Motion
```

---

# 💻 Software Implementation

The firmware was developed using the **Arduino IDE**.

The software architecture follows a modular design to improve readability, debugging, and future expansion.

The main software modules include:

- Bluetooth communication
- Command processing
- Motor control
- PWM generation
- Safety handling

---

## Software Workflow

```text
Initialize Hardware

↓

Connect Bluetooth

↓

Receive Command

↓

Process Input

↓

Generate PWM

↓

Drive Motors

↓

Wait for Next Command
```

---

## Key Features

- Wireless Bluetooth operation
- Differential-drive algorithm
- PWM motor speed control
- Low-latency response
- Modular firmware architecture
- Expandable for autonomous navigation

---

# 📐 Engineering Calculations

Engineering calculations were performed before manufacturing to verify that the design would satisfy the desired performance requirements.

The analytical work included:

- Motor torque estimation
- Pushing force analysis
- Robot velocity estimation
- Battery capacity calculations
- Power consumption estimation
- Differential-drive kinematics

These calculations guided the selection of motors, battery capacity, gear ratio, and overall mechanical configuration.

Detailed derivations and mathematical analysis are available in the accompanying project report located in the **docs/** directory.

> Engineering decisions throughout this project were supported by analytical calculations rather than trial-and-error, ensuring that the final design achieved an effective balance between performance, efficiency, and reliability.

---
