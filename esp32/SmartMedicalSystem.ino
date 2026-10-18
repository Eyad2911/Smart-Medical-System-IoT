/*
 * Smart Medical System
 * ELCT 605 - Microelectronics Lab
 * Spring 2026
 *
 * ESP32 Edge Node
 *
 * Features:
 * - ECG Monitoring (AD8232)
 * - SpO2 Monitoring (MAX30102)
 * - Temperature Monitoring (DS18B20)
 * - Step Detection (MPU6050)
 * - OLED Display
 * - MQTT Cloud Communication
 * - Emergency Alarm Control
 *
 * Team:
 * - Abdelrahman Diab
 * - Abdelwahab Mohamed
 * - Ahmed El-Shahat
 * - Belal Ramadan
 * - Eyad Mohamed
 * - Marwan Ashraf
 */
#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include "MAX30105.h"
#include "heartRate.h"
