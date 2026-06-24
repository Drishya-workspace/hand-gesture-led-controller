# Hand Gesture Controlled LED using ESP32-C3 and Computer Vision

## Overview

This project demonstrates a real-time hand gesture recognition system that controls an LED connected to an ESP32-C3 Super Mini using computer vision.

The system utilizes MediaPipe Hands to detect hand landmarks through a webcam and classify gestures based on finger positions. Commands are transmitted directly from the browser to the ESP32 using the Web Serial API, enabling touchless hardware control without requiring a dedicated desktop application.

---

## Features

* Real-time hand tracking and gesture recognition
* Open Palm Gesture → LED ON
* Closed Fist Gesture → LED OFF
* Browser-to-ESP32 communication using Web Serial API
* Interactive monitoring dashboard
* Live gesture visualization and status indicators
* Lightweight implementation with no machine learning model training required

---

## Technologies Used

### Software

* HTML
* CSS
* JavaScript
* MediaPipe Hands
* Web Serial API

### Hardware

* ESP32-C3 Super Mini
* LED
* Current Limiting Resistor
* USB Connection

---

## System Architecture

Camera Input
↓
MediaPipe Hand Detection
↓
Finger Counting Logic
↓
Gesture Classification
↓
Web Serial Communication
↓
ESP32-C3
↓
LED Control

---

## Gesture Mapping

| Gesture                            | Action  |
| ---------------------------------- | ------- |
| Open Palm (4-5 fingers detected)   | LED ON  |
| Closed Fist (0-1 fingers detected) | LED OFF |

---

## Working Principle

1. The webcam continuously captures video frames.
2. MediaPipe Hands extracts 21 hand landmarks.
3. Finger positions are analyzed to determine how many fingers are raised.
4. An open palm is classified as an ON command.
5. A closed fist is classified as an OFF command.
6. The browser sends:

   * "1" for LED ON
   * "0" for LED OFF
7. The ESP32-C3 receives the command via serial communication and updates the LED state.

---

## Project Structure

Hand-Gesture-LED-Controller/

├── index.html

├── README.md

├── arduino/

│ └── esp32_led_controller.ino

├── images/

│ ├── dashboard.png

│ ├── led_on.png

│ └── led_off.png

---

## Setup Instructions

### 1. Upload ESP32 Firmware

Upload the Arduino sketch to the ESP32-C3 Super Mini using Arduino IDE.

### 2. Open the Web Application

Open the index.html file using Google Chrome or Microsoft Edge.

### 3. Connect ESP32

Click the "Connect to ESP32" button and select the correct serial port.

### 4. Start Camera

Grant camera permissions and start the webcam feed.

### 5. Test Gestures

* Show an open palm to turn the LED ON.
* Show a closed fist to turn the LED OFF.

---

## Applications

* Touchless device control
* Smart home automation
* Human-computer interaction systems
* Assistive technologies
* Gesture-based IoT control

---

## Learning Outcomes

Through this project, I gained practical experience in:

* Computer Vision fundamentals
* Hand Landmark Detection
* MediaPipe Framework
* Gesture Recognition Logic
* Browser Hardware Communication
* ESP32-C3 Interfacing
* Human-Computer Interaction
* Frontend Development using HTML, CSS, and JavaScript

---

## Future Improvements

* Multiple appliance control
* Wi-Fi and MQTT communication
* Custom gesture training
* Mobile-friendly interface
* Smart home integration
* Gesture-based robotic control

---


