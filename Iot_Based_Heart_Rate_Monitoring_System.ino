/*
===============================================================================
                 IOT BASED HEART RATE MONITORING SYSTEM
===============================================================================

Project       : IoT Based Heart Rate Monitoring System
Module        : Heart Rate Monitoring Firmware
Platform      : NodeMCU ESP8266
IDE           : Arduino IDE
Language      : C++
Author        : ShivsFoundry
Version       : 1.0
License       : MIT License

-------------------------------------------------------------------------------
Project Overview
-------------------------------------------------------------------------------

This program implements an IoT-based Heart Rate Monitoring System using the
NodeMCU ESP8266 microcontroller.

The system continuously acquires analog pulse signals from a Pulse Sensor,
calculates the corresponding Heart Rate in Beats Per Minute (BPM), displays
the measured value on a 0.96-inch OLED display, and uploads the data to the
ThingSpeak Cloud Platform through the built-in Wi-Fi interface.

The uploaded heart rate readings can be monitored remotely using the
ThingSpeak dashboard, allowing real-time visualization and historical data
analysis from any internet-connected device.

Functions performed by this firmware include:

• Pulse Sensor Data Acquisition
• Analog Signal Processing
• Heart Rate (BPM) Calculation
• OLED Display Interface
• Wi-Fi Connectivity
• ThingSpeak Cloud Integration
• Real-Time Data Upload
• Continuous Heart Rate Monitoring

-------------------------------------------------------------------------------
Main Features
-------------------------------------------------------------------------------

✓ Analog Pulse Sensor Interface
✓ Real-Time Heart Rate Monitoring
✓ BPM Calculation
✓ OLED Display Output
✓ Built-in Wi-Fi Connectivity
✓ ThingSpeak Cloud Upload
✓ Remote Health Monitoring
✓ Continuous Data Logging
✓ Low-Cost IoT Healthcare Solution
✓ Compact Embedded System

-------------------------------------------------------------------------------
Hardware Used
-------------------------------------------------------------------------------

• NodeMCU ESP8266 Development Board
• Pulse Sensor
• 0.96-inch OLED Display (I²C)
• Breadboard
• Jumper Wires
• USB Cable

-------------------------------------------------------------------------------
Required Libraries
-------------------------------------------------------------------------------

• SPI.h
• Wire.h
• Adafruit_GFX.h
• Adafruit_SSD1306.h
• ESP8266WiFi.h
• ThingSpeak.h

===============================================================================
*/


/*==============================================================================
                              Library Includes
==============================================================================*/

// SPI Communication Library
#include <SPI.h>

// I²C Communication Library
#include <Wire.h>

// OLED Display Driver
#include <Adafruit_SSD1306.h>

// Graphics Library for OLED
#include <Adafruit_GFX.h>

// ESP8266 Wi-Fi Library
#include <ESP8266WiFi.h>

// ThingSpeak Cloud Library
#include <ThingSpeak.h>


/*==============================================================================
                           OLED Display Configuration
==============================================================================*/

// Create OLED Display Object (128 × 64 Pixels)
Adafruit_SSD1306 display(128, 64, &Wire);


/*==============================================================================
                             Wi-Fi Client Object
==============================================================================*/

// Create Wi-Fi Client for ThingSpeak Communication
WiFiClient client;


/*==============================================================================
                           Hardware Pin Definition
==============================================================================*/

// Analog Input Pin Connected to Pulse Sensor
const int sensorPin = A0;


/*==============================================================================
                              Global Variables
==============================================================================*/

// Stores Analog Value Read from Pulse Sensor
int sensorValue;

// Stores Current System Time
unsigned long starttime = 0;

// Reserved Variable for Pulse Counting Logic
boolean counted = false;


/*==============================================================================
                         ThingSpeak Configuration
==============================================================================*/

// ThingSpeak Channel Number
long myChannelNumber = *******;

// ThingSpeak Write API Key
const char myWriteAPIKey[] = "***********";


/*==============================================================================
                               Setup Function
==============================================================================*/

void setup(void)
{
    // Initialize OLED Display
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

    // Start Serial Communication
    Serial.begin(9600);

    // Clear OLED Screen
    display.clearDisplay();

    // Connect to Wi-Fi Network
    WiFi.begin("*********", "12345678");

    // Wait Until Wi-Fi Connection is Established
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(200);
        Serial.print("..");
    }

    // Print Connection Status
    Serial.println();
    Serial.println("==================================");
    Serial.println(" NodeMCU Connected Successfully");
    Serial.println("==================================");

    // Display Assigned IP Address
    Serial.print("IP Address : ");
    Serial.println(WiFi.localIP());

    // Initialize ThingSpeak Communication
    ThingSpeak.begin(client);
}


/*==============================================================================
                             Main Program Loop
==============================================================================*/

void loop()
{
    // Store Current System Time
    starttime = millis();

    // Read Analog Value from Pulse Sensor
    sensorValue = analogRead(sensorPin);

    // Print ADC Reading to Serial Monitor
    Serial.print("ADC Value : ");
    Serial.println(sensorValue);

    // Calculate Heart Rate (BPM)
    int bpm = 50000 / sensorValue;

    // Display BPM on Serial Monitor
    Serial.print("Heart Rate : ");
    Serial.print(bpm);
    Serial.println(" BPM");
        /*==========================================================================
                             OLED Display Section
    ==========================================================================*/

    // Clear Previous Display Contents
    display.clearDisplay();

    // Set Display Text Color
    display.setTextColor(WHITE);

    // Set Cursor Position for Title
    display.setCursor(0, 0);

    // Set Display Text Size
    display.setTextSize(2);

    // Display Project Title
    display.println("Heart Rate");

    // Set Cursor Position for BPM Value
    display.setCursor(0, 28);

    // Display BPM Label
    display.print("BPM: ");

    // Display Calculated Heart Rate
    display.print(bpm);

    // Print ASCII Character 3 (As Used in Original Program)
    display.write(3);

    // Refresh OLED Display
    display.display();


    /*==========================================================================
                           Sampling Delay
    ==========================================================================*/

    // Wait Before Taking the Next Reading
    delay(1000);


    /*==========================================================================
                         ThingSpeak Cloud Upload
    ==========================================================================*/

    // Upload Heart Rate Value to Field 1 of the ThingSpeak Channel
    ThingSpeak.writeField(myChannelNumber, 1, bpm, myWriteAPIKey);

}


/*
===============================================================================
                              End of Source File
===============================================================================

Project       : IoT Based Heart Rate Monitoring System
Module        : Heart Rate Monitoring Firmware
Platform      : NodeMCU ESP8266
IDE           : Arduino IDE
Language      : C++
Author        : ShivsFoundry
Version       : 1.0
License       : MIT License

-------------------------------------------------------------------------------
Program Summary
-------------------------------------------------------------------------------

This firmware continuously performs the following operations:

• Reads analog pulse signals from the Pulse Sensor
• Calculates Heart Rate (BPM)
• Displays BPM on the OLED Display
• Connects to a Wi-Fi Network
• Uploads Heart Rate Data to ThingSpeak Cloud
• Enables Real-Time Remote Health Monitoring

-------------------------------------------------------------------------------
Repository
-------------------------------------------------------------------------------

GitHub Repository

IOT BASED HEART RATE MONITORING SYSTEM

-------------------------------------------------------------------------------
Developed By
-------------------------------------------------------------------------------

ShivsFoundry

Building Reliable Embedded Systems & IoT Solutions

-------------------------------------------------------------------------------
End of Program
-------------------------------------------------------------------------------

Thank you for using this project.

If you found this project useful, consider giving the repository a ⭐ on GitHub.

===============================================================================
*/