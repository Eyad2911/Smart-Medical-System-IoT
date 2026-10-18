# Smart Medical System

An IoT-based healthcare monitoring system developed using ESP32 and Raspberry Pi for real-time patient monitoring, medical data logging, cloud communication, and emergency alerting.

## Overview

The Smart Medical System continuously collects vital signs from multiple biomedical sensors and transmits the processed data through an MQTT cloud broker. A Raspberry Pi receives, stores, visualises, and analyses the data while providing automated alerts for abnormal patient conditions.

The system is designed to improve remote patient monitoring through real-time data acquisition, emergency detection, cloud connectivity, and medical staff notification. 【1-a4d9b6】

---

## Features

- Real-time ECG monitoring
- Heart rate (BPM) calculation
- Blood oxygen (SpO₂) monitoring
- Body temperature measurement
- Step counting and activity tracking
- OLED display for local monitoring
- MQTT cloud communication
- SQLite database logging
- Raspberry Pi monitoring dashboard
- Telegram emergency notifications
- Automated voice call alerts
- Local buzzer and relay activation for emergencies
- Digital signal processing (DSP) filtering for ECG signals

---

## System Architecture

```text
Sensors
   │
   ▼
ESP32 Edge Node
   │
   ├── DSP Filtering
   ├── Feature Extraction
   ├── Local Safety Checks
   │
   ▼
MQTT Cloud Broker (HiveMQ)
   │
   ▼
Raspberry Pi Gateway
   │
   ├── Database Logging
   ├── GUI Monitoring
   ├── Emergency Analysis
   ├── Telegram Alerts
   └── Voice Call Notifications
```

---

## Hardware Components

| Component | Function |
|------------|------------|
| ESP32 | Main edge processing unit |
| Raspberry Pi 5 | Gateway and monitoring station |
| MAX30102 | SpO₂ and heart rate sensor |
| AD8232 | ECG sensor |
| DS18B20 | Temperature sensor |
| MPU6050 | Motion and step detection |
| OLED Display | Live patient data display |
| Relay Module | Emergency actuation |
| Buzzer | Local alarm system |

---

## Software Technologies

- Arduino IDE
- Python
- MQTT (HiveMQ)
- SQLite
- Tkinter GUI
- Telegram Bot API
- CallMeBot API

---

## Data Processing

### Edge Processing (ESP32)

- Sensor data acquisition
- ECG noise filtering using dual EMA filtering
- Dynamic heartbeat detection
- SpO₂ calculation
- Local emergency detection
- MQTT data publishing

### Gateway Processing (Raspberry Pi)

- MQTT subscription and message handling
- Multi-threaded processing
- Database management
- Historical data storage
- Real-time GUI monitoring
- Emergency alert generation

---

## Emergency Detection

The system automatically evaluates incoming patient data and classifies events into multiple alert levels:

### Warning
- Minor abnormalities
- Patient notification

### Concerning
- High fever
- Abnormal heart rate
- Low oxygen levels
- Doctor notification

### Dangerous
- Critical hypoxia
- Severe arrhythmia
- Critical patient conditions
- Doctor notification
- Automated voice call
- Local alarm activation

---

## Project Structure

```text
Smart-Medical-System/
│
├── README.md
├── docs/
│   ├── Project_Report.pdf
│   └── Circuit_Diagram.png
│
├── esp32/
│   └── SmartMedicalSystem.ino
│
├── raspberry_pi/
│   └── receiver.py
│
├── images/
│   ├── hardware_setup.jpg
│   ├── gui_preview.jpg
│   └── circuit_schematic.jpg
│
└── requirements.txt
```

---

## Results

The developed system successfully:

- Monitors patient vital signs in real time
- Displays data locally on an OLED display
- Sends data through cloud MQTT communication
- Logs medical records to a database
- Provides historical patient review
- Generates automatic emergency alerts
- Supports remote healthcare monitoring

---

## Challenges Faced

- ECG signal acquisition and noise reduction
- Analog-to-digital conversion of ECG data
- MQTT communication setup
- ESP32 hotspot connectivity
- Real-time multi-threaded processing

---

## Course Information

**Course:** ELCT 605 - Microelectronics Lab  
**Semester:** Spring 2026  
**Department:** Electrical and Electronic Engineering  
**Institution:** German University in Cairo (GUC)

---

## Team Members

- Eyad Mohamed
- Abdelrahman Diab
- Abdelwahab Mohamed
- Ahmed El-Shahat
- Belal Ramadan
- Marwan Ashraf

---

## Future Improvements

- Mobile application integration
- AI-based health prediction models
- Cloud dashboard analytics
- Multi-patient scalability
- Wearable device integration
- Medical report generation

---

## License

This project is released under the MIT License.
