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
      │
 Differential Drive
      │
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
