# Smart Lab Access and Monitoring System

Welcome to the GitHub repository for our Smart Lab Access and Monitoring System! This project combines various technologies to create a secure and efficient environment for laboratory access and monitoring.

## Overview

Our system integrates Arduino Nano, ESP32 Cam, DHT22, Fingerprint Sensor,2.0 inch TFT display, 2.4 inch TFT display and Nodemcu to provide a comprehensive solution for lab security and monitoring. Here's a breakdown of the key features:

1. **Lab Entrance System (Arduino Nano):**
   - RFID scanning for user identification.
   - Servo motor control to open the lab gate.
   - 2.0 TFT display for real-time access status.

2. **Internal Environment Monitoring (ESP32 Cam and DHT22):**
   - Continuous tracking of temperature and humidity inside the lab.
   - Live video streaming to a mobile device using ESP32 Cam.
   - 2.4 inch display to show the real time internal condition of the lab
3. **Vault Access Control (Fingerprint Sensor):**
   - Fingerprint authentication for authorized faculty members to access the vault.

4. **Fire Alarm System (DHT22 with Nodemcu):**
   - Real-time monitoring of room temperature and humidity.
   - Buzzer alert for fire detection.

## Repository Structure

- **/ArduinoNano:** Contains the code for the lab entrance system using Arduino Nano.
- **/ESP32Cam:** Includes the code for internal monitoring using ESP32 Cam ( Live Video ).
- **/FingerprintSensor:** Code for the vault access control system with the fingerprint sensor.
- **/FireAlarmSystem:** Nodemcu code for the fire alarm detection system.

## Getting Started

1. Clone the repository to your local machine.

   ```bash
   git clone https://github.com/anikatabassum19/smar_lab.git
