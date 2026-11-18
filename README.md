# IoT-Based Fish Feeding Automation Using KiwisIoT

## Project Overview

This project automates fish feeding using an ESP8266 NodeMCU and IoT technology. It helps control fish feeding operations and enables remote monitoring through the KiwisIoT platform, making aquarium and fish farming management easier and more efficient.

## Hardware Components

- ESP8266 NodeMCU
- Servo Motor
- Fish Feed Container
- Jumper Wires
- Power Supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- Servo Motor Library

## Circuit Connections

| Component          | ESP8266 Pin        |
| ------------------ | ------------------ |
| Servo Motor Signal | D4                 |
| Servo Motor VCC    | External 5V Supply |
| Servo Motor GND    | GND                |

Connect the external power supply ground to the NodeMCU GND.

## Working Principle

The ESP8266 controls the servo motor to operate the fish feeding mechanism. When a feeding command is received, the servo motor rotates to release fish food into the tank. KiwisIoT enables remote control and monitoring of the feeding system.

## KiwisIoT Dashboard

The dashboard can be used to control and monitor fish feeding operations remotely.

| Function        | Description               |
| --------------- | ------------------------- |
| Feeding Control | Activate fish feeding     |
| Feeding Status  | Monitor feeding operation |
| Remote Access   | Control through KiwisIoT  |

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and manage fish feeding through the KiwisIoT dashboard.

## Applications

- Smart aquarium management
- Automated fish feeding
- Fish farming automation
- Remote feeding control
- Smart aquaculture systems

## Project Reference

**Hackster.io Project:**  
[https://www.hackster.io/harispidy07/iot-based-fish-feeding-automation-using-kiwisiot-b0b622](https://www.hackster.io/harispidy07/iot-based-fish-feeding-automation-using-kiwisiot-b0b622)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Built using ESP8266, Servo Motor, and KiwisIoT for smart fish feeding automation._
