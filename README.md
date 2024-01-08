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
   git clone https://github.com/anikatabassum19/smart_lab/
2. Then Upload the fire alarm code in nodemcu
3. Upload the RFID code in arduino nano
4. Change the SSID and Password of live monitoring code and then upload it in the esp32 cam

## Connection Strings
### Arduino Nano to Servo:
- Servo GND to Arduino Nano GND
- Servo VCC to Arduino Nano 5V
- Servo Data to Arduino Nano D6

### Arduino Nano to RFID:
- RFID VCC to Arduino Nano 3.3V
- RFID GND to Arduino Nano GND
- RFID SDA to Arduino Nano D10
- RFID SCK to Arduino Nano D13
- RFID MOSI to Arduino Nano D11
- RFID MISO to Arduino Nano D12
- RFID RST to Arduino Nano D9

### NodeMCU to DHT22:
- DHT22 GND to NodeMCU GND
- DHT22 VCC to NodeMCU 3V
- DHT22 Data to NodeMCU D2

### TFT 2.4 to NodeMCU:
- TFT VCC to NodeMCU 3.3V
- TFT GND to NodeMCU GND
- TFT CS to NodeMCU D8
- TFT Reset to NodeMCU RST
- TFT DC to NodeMCU D4
- TFT SDI to NodeMCU D7
- TFT SCK to NodeMCU D5
- TFT LED to NodeMCU 3.3V
- TFT SDD to NodeMCU D6
- TFT T_CLK to NodeMCU D5
- TFT T_DIN to NodeMCU D7
- TFT T_D0 to NodeMCU D6
- TFT T_IRQ to NodeMCU D1

### Arduino Nano to 2.0 TFT Display:
- TFT GND to Arduino Nano GND
- TFT 3.3V to Arduino Nano 3.3V
- TFT SCL to Arduino Nano D13
- TFT SDA to Arduino Nano D11
- TFT RES to Arduino Nano D4
- TFT DC to Arduino Nano D7
- TFT CS to Arduino Nano D2

