# Guesture Mouse

## Project Overview
This project is designed to create a **mouse control system that can be operated using a single finger movement**. It is especially useful for **people with limited hand mobility or disabilities**.

The system uses an **MPU6050 motion sensor** connected to an **Arduino board** to detect hand or finger movements. These movements are converted into **mouse cursor movements on a computer screen**.

Two switches are used to perform **left-click and right-click actions**.

---

## Objectives
- Design a **low-cost assistive mouse control system**
- Allow users to **control a computer using minimal finger movement**
- Convert **sensor motion data into cursor movement**
- Support **physically challenged users**

---

## Technologies Used
- Arduino (Embedded C++)
- MPU6050 Motion Sensor
- Arduino Mouse Library
- I2C Communication
- Arduino IDE / VS Code

---

## Hardware Requirements
- Arduino Leonardo / Arduino Micro / Pro Micro
- MPU6050 Gyroscope and Accelerometer Sensor
- 2 Push Button Switches
- Jumper Wires
- Breadboard
- USB Cable

---

## Software Requirements
- Arduino IDE or VS Code with Arduino Extension
- MPU6050 Library
- Wire Library
- Mouse Library

---

## Working Principle
1. The **MPU6050 sensor** reads acceleration and gyroscope values.
2. Arduino processes the motion data.
3. Accelerometer values are mapped to **mouse cursor movement**.
4. Cursor moves based on **hand tilt or finger movement**.
5. Two switches are used for **left-click and right-click operations**.

---

## Code Description
The Arduino program performs the following tasks:

- Initializes the MPU6050 sensor
- Reads motion values from the sensor
- Maps accelerometer data to mouse movement
- Moves the cursor accordingly
- Detects button presses for left and right mouse clicks

---

## Applications
- Assistive technology for disabled users
- Hands-free computer control
- Educational robotics projects
- Human-computer interaction systems
