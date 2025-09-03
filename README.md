# Vision Navigator Cane

## Overview

The Vision Navigator Cane is an assistive device designed to help visually impaired individuals detect and avoid obstacles in real time. It combines **ultrasonic sensors**, **servo motors**, and **vibration feedback** to provide users with directional awareness of their surroundings.

This project was developed as part of the *ESC-100 Exploring Engineering* course at Union College (Fall 2023).

---

## Features

* **Multi-directional Obstacle Detection**

  * Three HC-SR04 ultrasonic sensors detect obstacles within 30 cm.
  * Mounted on servo motors to sweep across a wider field of view.

* **Haptic Feedback**

  * Dual vibration motors provide directional alerts:

    * Left vibration = object on the left
    * Right vibration = object on the right
    * Both vibrate = object directly ahead

* **Modular Microcontroller System**

  * One Arduino RedBoard controls the sensors and vibration motors.
  * A second Arduino RedBoard controls the servo motors for sensor rotation.

* **Real-Time Response**

  * Sensor readings updated with 200 ms intervals.
  * Immediate vibration feedback enhances navigation safety.

---

## Hardware Components

* 2 × Arduino RedBoards (each powered by 9V battery)
* 3 × HC-SR04 ultrasonic sensors
* 3 × Servo motors (sensor rotation)
* 2 × Vibration motors
* 1 × Push button (start sensor rotation)
* Breadboards, wiring, and DC motor with wheels (used as axle for stability)

---

## Code Files

* **Ultrasonic\_Sensor\_and\_Vibration\_Motor\_Code.ino**

  * Reads ultrasonic sensor values.
  * Activates vibration motors if obstacles are detected within threshold.
  * Provides serial output of measured distances.

* **Servo\_Code.ino**

  * Controls servo motors sweeping from 0°–60°.
  * Triggered by push button input.
  * Runs independently on second RedBoard.

---

## How It Works

1. Press the start button to activate sensor rotation.
2. Servo motors rotate ultrasonic sensors across the scanning field.
3. Each sensor measures distance and sends readings to the controller.
4. If an object is detected within 30 cm, vibration motors activate:

   * Left = left obstacle
   * Right = right obstacle
   * Both = obstacle ahead

---

## Build Instructions

1. Assemble hardware following wiring diagram in final report (Figure 7, Electronics Design).
2. Upload `Servo_Code.ino` to one Arduino RedBoard.
3. Upload `Ultrasonic_Sensor_and_Vibration_Motor_Code.ino` to the second Arduino RedBoard.
4. Power each RedBoard with 9V battery.
5. Connect the vibration motors and sensors to the correct pins as defined in the code.
6. Use Arduino Serial Monitor to debug and view distance readings.

---

## Customization

* **Detection Threshold**: Adjust the distance limit in the ultrasonic code (default 30 cm).
* **Servo Sweep Angle**: Modify angle range in `Servo_Code.ino`.
* **Feedback Patterns**: Add more vibration levels or patterns to represent distance more precisely.

---

## Team

* Hoang Tran
* Elena Leslie
* Jacqueline Brienza

Union College – Department of Engineering
ESC-100 Exploring Engineering, Professor Traver
