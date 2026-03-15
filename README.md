# dual-microcontroller-maze-solving-robot
Maze solving robot using two Arduino microcontrollers for motor control and navigation logic


# Dual Microcontroller Maze Solving Robot

## Overview

This project demonstrates a maze-solving robotic system using two Arduino microcontrollers. The design separates navigation logic from motor control to improve modularity and system efficiency.

One Arduino handles sensor processing and navigation decisions, while the second Arduino executes movement commands by controlling the motor driver.

## Key Features

- Dual microcontroller architecture
- Ultrasonic sensor based obstacle detection
- Left-Hand Rule maze solving algorithm
- Serial communication between controllers
- Modular embedded system design

## System Architecture

- Navigation Controller
  - Reads ultrasonic sensors
  - Implements maze solving logic
  - Sends movement commands

- Motor Control Controller
  - Receives commands via Serial
  - Controls motor direction and speed

## Hardware Components

- 2 × Arduino Uno
- Ultrasonic Sensors (HC-SR04)
- Motor Driver (L298N)
- DC Motors
- Power Supply
- Chassis

## Communication Protocol

The navigation controller sends simple serial commands:

| Command | Action |
|-------|------|
| F | Move Forward |
| L | Turn Left |
| R | Turn Right |

## Maze Solving Algorithm

The robot follows the **Left-Hand Rule**:

1. If left path is open → turn left
2. Else if front path is open → move forward
3. Else → turn right

This strategy guarantees maze traversal when walls are connected.

## Project Structure
dual-microcontroller-maze-solving-robot
│
├── code
│ ├── arduino_navigation.ino
│ └── arduino_motor_control.ino
│
├── circuit
│ └── circuit_diagram.png
│
├── simulation
│ └── tinkercad_link.txt
│
└── README.md


## Applications

- Robotics education
- Embedded systems learning
- Autonomous navigation experiments
