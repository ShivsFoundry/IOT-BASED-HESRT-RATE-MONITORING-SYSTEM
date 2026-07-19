# IOT-BASED-HESRT-RATE-MONITORING-SYSTEM
A real-time IoT Heart Rate Monitoring System using NodeMCU ESP8266, Pulse Sensor, OLED Display, and ThingSpeak Cloud for remote health monitoring and cloud-based data visualization.
<div align="center">

# ❤️ IoT Based Heart Rate Monitoring System

### Real-Time Heart Rate Monitoring Using NodeMCU ESP8266, Pulse Sensor & ThingSpeak Cloud

[![Platform](https://img.shields.io/badge/Platform-ESP8266-blue?style=for-the-badge)]()
[![IDE](https://img.shields.io/badge/IDE-Arduino_IDE-00979D?style=for-the-badge)]()
[![Language](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge)]()
[![Cloud](https://img.shields.io/badge/Cloud-ThingSpeak-26A69A?style=for-the-badge)]()
[![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)]()

A compact Internet of Things (IoT) healthcare system capable of measuring heart rate in real time using a Pulse Sensor, displaying the measured Beats Per Minute (BPM) on an OLED display, and securely uploading the readings to the ThingSpeak cloud platform for remote monitoring and data visualization.

</div>

---

# 📖 Table of Contents

- Project Overview
- Key Features
- Why This Project?
- Hardware Requirements
- Software Requirements
- Required Libraries
- Repository Structure
- Hardware Connections
- Pin Configuration
- Working Principle
- ThingSpeak Configuration
- Arduino IDE Setup
- Uploading the Firmware
- System Operation
- Results
- Applications
- Troubleshooting
- Future Improvements
- Contributing
- Security
- License

---

# 📌 Project Overview

The **IoT Based Heart Rate Monitoring System** is an embedded healthcare application that continuously measures a person's heart rate using an optical Pulse Sensor connected to a **NodeMCU ESP8266** development board.

The measured heart rate is processed by the ESP8266 and displayed instantly on a **0.96-inch OLED Display**. At the same time, every reading is transmitted over Wi-Fi to the **ThingSpeak Cloud Platform**, where it is securely stored and visualized as real-time graphs.

Unlike conventional monitoring systems that only provide local readings, this project combines embedded electronics with cloud technology, allowing users to monitor heart rate remotely from any internet-connected device.

The project demonstrates the practical implementation of IoT concepts in healthcare by integrating sensing, embedded processing, wireless communication, cloud storage, and real-time visualization into a compact and low-cost system.

---

# 🎯 Project Objectives

The primary objectives of this project are:

- Measure heart rate accurately using an optical pulse sensor.
- Display live BPM values on an OLED display.
- Upload heart rate data to the ThingSpeak cloud.
- Enable remote health monitoring through the internet.
- Store historical measurements for future analysis.
- Demonstrate practical implementation of IoT in healthcare.
- Develop a compact, portable, and low-cost embedded system.

---

# ✨ Key Features

- ❤️ Real-Time Heart Rate Monitoring
- 📟 Live OLED Display
- ☁️ ThingSpeak Cloud Integration
- 📈 Automatic Data Logging
- 📶 Built-in Wi-Fi Communication
- ⚡ Low Power Consumption
- 📊 Historical Data Visualization
- 💻 Arduino IDE Compatible
- 🔄 Continuous Monitoring
- 🛠 Simple Hardware Design
- 🎓 Educational IoT Healthcare Project
- 🌐 Remote Monitoring Capability

---

# 💡 Why This Project?

Continuous monitoring of heart rate is essential in modern healthcare systems. Traditional monitoring devices often require direct observation or expensive medical equipment.

This project offers a simple and affordable solution by combining embedded hardware with cloud connectivity. The system continuously monitors heart rate, stores readings on the cloud, and enables remote visualization without requiring specialized hardware or software.

Its modular design also makes it an excellent educational platform for learning embedded systems, IoT communication, cloud integration, and biomedical sensing.

---

# 🛠 Hardware Requirements

| Component | Quantity |
|:----------|:-------:|
| NodeMCU ESP8266 Development Board | 1 |
| Pulse Sensor | 1 |
| 0.96" OLED Display (I²C) | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |
| Computer/Laptop | 1 |

---

# 💻 Software Requirements

| Software | Purpose |
|:---------|:--------|
| Arduino IDE | Program Development |
| ESP8266 Board Package | Board Support |
| ThingSpeak | Cloud Platform |
| Serial Monitor | Debugging |
| Web Browser | Dashboard Monitoring |

---

# 📚 Required Libraries

Install the following libraries using the **Arduino Library Manager** before compiling the project.

| Library | Purpose |
|:---------|:--------|
| ESP8266WiFi | Wi-Fi Communication |
| ThingSpeak | Cloud Data Upload |
| Wire | I²C Communication |
| Adafruit GFX | OLED Graphics |
| Adafruit SSD1306 | OLED Display Driver |

> **Note:** Installing the latest stable versions of these libraries is recommended for maximum compatibility and stability.

---

# 📂 Repository Structure

```text
IOT-BASED-HEART-RATE-MONITORING-SYSTEM
│
├── Firmware
│   └── Heart_Rate_Monitor.ino
│
├── Circuit_Diagram
│   └── Circuit_Diagram.pdf
│
├── Project_Report
│   └── IOT_Based_Heart_Rate_Monitoring_System.pdf
│
├── README.md
├── LICENSE
├── CONTRIBUTING.md
├── SECURITY.md
└── .gitignore
```

---

## 📖 Project Highlights

- Designed using **NodeMCU ESP8266** with integrated Wi-Fi.
- Utilizes an optical Pulse Sensor for heart rate detection.
- Displays real-time BPM on a 0.96-inch OLED display.
- Uploads sensor data directly to ThingSpeak using HTTP.
- Provides remote monitoring and historical trend analysis.
- Built entirely using open-source hardware and software.
- Suitable for academic projects, IoT learning, and healthcare demonstrations.

---

> **Note**
>
> This repository contains the complete firmware, documentation, project report, and configuration details required to build and understand the IoT Based Heart Rate Monitoring System. The project is intended for educational purposes and serves as a practical example of integrating embedded systems with cloud-based IoT services.
# 🔌 Hardware Connections

The hardware architecture of the **IoT Based Heart Rate Monitoring System** is designed to be simple, reliable, and easy to reproduce. The system consists of a **NodeMCU ESP8266** development board, a **Pulse Sensor**, and a **0.96-inch I²C OLED Display**.

The NodeMCU continuously acquires analog heartbeat signals from the Pulse Sensor, processes them to calculate the heart rate in **Beats Per Minute (BPM)**, displays the measured value on the OLED display, and simultaneously uploads the data to the ThingSpeak cloud platform over Wi-Fi.

The entire system operates using a single USB power source, making it portable, compact, and suitable for IoT healthcare applications.

---

# 🧩 Hardware Components

| Component | Description |
|:----------|:------------|
| **NodeMCU ESP8266** | Main microcontroller with built-in Wi-Fi connectivity |
| **Pulse Sensor** | Optical heartbeat sensing module |
| **0.96-inch OLED Display (I²C)** | Displays real-time BPM readings |
| **Breadboard** | Prototype circuit assembly |
| **Jumper Wires** | Hardware interconnections |
| **USB Cable** | Power supply and firmware upload |

---

# 🔌 Pin Configuration

## NodeMCU ESP8266 Connections

| NodeMCU Pin | Connected Device | Function |
|:-----------:|:-----------------|:---------|
| **A0** | Pulse Sensor Signal | Analog Input |
| **3V3** | Pulse Sensor VCC | Power Supply |
| **GND** | Pulse Sensor GND | Ground |
| **D1 (GPIO5)** | OLED SDA | I²C Data |
| **D2 (GPIO4)** | OLED SCL | I²C Clock |
| **3V3** | OLED VCC | Display Power |
| **GND** | OLED GND | Ground |

---

# ❤️ Pulse Sensor

The Pulse Sensor is an optical biomedical sensor used to detect heartbeats using the principle of **Photoplethysmography (PPG)**.

When a finger is placed on the sensing surface, the integrated LED emits light into the skin. Blood flow changes with each heartbeat, causing variations in the reflected light intensity. These changes are detected by the photodiode and converted into an analog electrical signal.

The NodeMCU samples this signal through its analog input pin and processes it to calculate the heart rate in **Beats Per Minute (BPM)**.

### Pulse Sensor Features

- Optical heartbeat detection
- Analog signal output
- Low power consumption
- Compact design
- High sensitivity
- Easy interfacing with ESP8266
- Suitable for healthcare and wearable applications

---

# 🖥 OLED Display

A **0.96-inch OLED Display** is used for displaying the measured heart rate locally.

The OLED communicates with the NodeMCU using the **I²C communication protocol**, requiring only two signal lines (SDA and SCL), which minimizes wiring complexity.

During operation, the display continuously updates the latest BPM reading, allowing users to observe their heart rate without requiring an internet connection.

### OLED Functions

- Displays current BPM
- Indicates successful startup
- Provides real-time monitoring
- High contrast display
- Wide viewing angle
- Low power consumption

---

# ⚙️ System Working Principle

The working sequence of the system is straightforward and operates continuously.

1. The user places a fingertip on the Pulse Sensor.
2. The Pulse Sensor detects blood flow variations caused by heartbeats.
3. The NodeMCU acquires the analog pulse signal.
4. The firmware filters and processes the signal.
5. The heart rate is calculated in Beats Per Minute (BPM).
6. The calculated BPM is displayed on the OLED screen.
7. The ESP8266 connects to the configured Wi-Fi network.
8. The measured BPM is uploaded to the ThingSpeak cloud.
9. ThingSpeak stores every reading with a timestamp.
10. The cloud dashboard automatically updates the heart rate graph.

This process repeats continuously, enabling both local and remote monitoring.

---

# 🔄 System Workflow

```text
             User Finger
                  │
                  ▼
           Pulse Sensor
                  │
          Analog Pulse Signal
                  │
                  ▼
         NodeMCU ESP8266
                  │
      Heart Rate Processing
                  │
         BPM Calculation
          ┌────────┴────────┐
          │                 │
          ▼                 ▼
    OLED Display      Wi-Fi Module
                            │
                            ▼
                  ThingSpeak Cloud
                            │
                            ▼
                 Remote Monitoring
```

---

# ☁️ ThingSpeak Configuration

ThingSpeak is the IoT cloud platform used to store and visualize the measured heart rate values.

Before uploading the firmware, create a ThingSpeak channel and obtain the required API Key.

## Step 1 — Create an Account

1. Visit the ThingSpeak website.
2. Sign in using your MathWorks account.
3. Create a new channel.

---

## Step 2 — Configure the Channel

Configure the channel as shown below.

| Field | Description |
|:------|:------------|
| **Channel Name** | Heart Rate Monitoring System |
| **Field 1** | Heart Rate (BPM) |

Save the channel after configuration.

---

## Step 3 — Obtain the Write API Key

Navigate to:

```text
Channels
   └── API Keys
```

Copy the **Write API Key**.

This key is required for the ESP8266 firmware to upload data securely to your ThingSpeak channel.

---

# 🌐 Wi-Fi Configuration

Open the firmware and locate the Wi-Fi credentials.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
```

Replace these values with your own Wi-Fi network credentials.

---

# 🔑 ThingSpeak API Configuration

Locate the following line in the firmware.

```cpp
String apiKey = "YOUR_WRITE_API_KEY";
```

Replace the placeholder with the **Write API Key** copied from your ThingSpeak account.

---

# 💻 Arduino IDE Setup

Before uploading the firmware, configure the Arduino IDE.

## Install ESP8266 Board Package

Open:

```text
File
   └── Preferences
```

Add the following Boards Manager URL:

```text
https://arduino.esp8266.com/stable/package_esp8266com_index.json
```

---

Open:

```text
Tools
   └── Board
        └── Boards Manager
```

Search for:

```text
ESP8266
```

Install the latest stable version.

---

## Install Required Libraries

Using the Arduino Library Manager, install:

- ESP8266WiFi
- ThingSpeak
- Wire
- Adafruit GFX
- Adafruit SSD1306

---

# 🚀 Uploading the Firmware

## Step 1

Connect the NodeMCU ESP8266 to your computer using a USB cable.

---

## Step 2

Select the correct board.

```text
Tools
   └── Board
        └── NodeMCU 1.0 (ESP-12E Module)
```

---

## Step 3

Select the correct COM Port.

```text
Tools
   └── Port
```

---

## Step 4

Open the project firmware.

```text
Firmware/
└── Heart_Rate_Monitor.ino
```

---

## Step 5

Update:

- Wi-Fi SSID
- Wi-Fi Password
- ThingSpeak Write API Key

---

## Step 6

Click **Verify** to compile the firmware.

Resolve any compilation errors before proceeding.

---

## Step 7

Click **Upload**.

After successful uploading, open the **Serial Monitor**.

A successful startup sequence should indicate:

- ESP8266 Boot Successful
- Wi-Fi Connected
- OLED Initialized
- Heart Rate Monitoring Started
- ThingSpeak Connected

---

# ▶️ Running the Project

Once the firmware has been uploaded successfully:

1. Power the NodeMCU through the USB cable.
2. Wait until the Wi-Fi connection is established.
3. Place your fingertip gently on the Pulse Sensor.
4. Observe the BPM on the OLED display.
5. Verify that the same readings are being uploaded to ThingSpeak.
6. Open your ThingSpeak channel to monitor real-time and historical heart rate data.

> **Tip**
>
> Keep your finger steady on the Pulse Sensor for several seconds to obtain stable BPM measurements. Excessive movement or inconsistent pressure may affect the accuracy of the readings.

# 📊 Results

The **IoT Based Heart Rate Monitoring System** was successfully designed, implemented, and tested using the **NodeMCU ESP8266**, **Pulse Sensor**, **0.96-inch OLED Display**, and the **ThingSpeak Cloud Platform**.

During testing, the system continuously measured the user's heart rate, calculated the corresponding **Beats Per Minute (BPM)**, displayed the values locally on the OLED display, and uploaded the same readings to the ThingSpeak cloud over Wi-Fi.

The cloud platform successfully stored every measurement with a timestamp, enabling users to monitor both live and historical heart rate data remotely through a web browser.

The project demonstrates a practical implementation of IoT technology in healthcare by combining embedded sensing, wireless communication, cloud computing, and real-time data visualization into a compact and cost-effective solution.

---

# ✅ Project Outcomes

The developed prototype successfully achieved the following objectives.

| Feature | Status |
|:--------|:------:|
| Real-Time Heart Rate Monitoring | ✅ |
| BPM Calculation | ✅ |
| OLED Display Output | ✅ |
| Wi-Fi Communication | ✅ |
| ThingSpeak Cloud Integration | ✅ |
| Automatic Data Upload | ✅ |
| Historical Data Logging | ✅ |
| Remote Monitoring | ✅ |
| Compact Embedded Design | ✅ |
| Low-Cost Healthcare Prototype | ✅ |

---

# 📈 Applications

The developed system can be applied in various healthcare and IoT-based applications, including:

- ❤️ Personal Health Monitoring
- 🏥 Remote Patient Monitoring
- 👨‍⚕️ Home Healthcare Systems
- 🩺 Heart Rate Observation
- 🏃 Fitness Tracking
- 📚 Biomedical Engineering Education
- 🎓 Embedded Systems Laboratory Projects
- ☁️ Cloud-Based Healthcare Applications
- 📊 IoT Data Acquisition Systems
- 🔬 Medical Device Prototyping

---

# 🧪 Testing & Validation

The project was tested under normal operating conditions to verify hardware functionality, cloud communication, and overall system reliability.

| Test Performed | Expected Result | Status |
|:---------------|:----------------|:------:|
| ESP8266 Boot | Successful Startup | ✅ |
| Pulse Sensor Detection | Heartbeat Detected | ✅ |
| BPM Calculation | Accurate Heart Rate | ✅ |
| OLED Display | Live BPM Display | ✅ |
| Wi-Fi Connection | Connected Successfully | ✅ |
| ThingSpeak Upload | Data Uploaded Successfully | ✅ |
| Continuous Operation | Stable Performance | ✅ |

---

# ⚠️ Troubleshooting

## NodeMCU Not Detected

**Possible Causes**

- Faulty USB cable
- Missing USB driver
- Incorrect COM port selection
- Incorrect board selection

**Solution**

- Install the required USB driver.
- Use a USB cable that supports data transfer.
- Select the correct COM port.
- Choose **NodeMCU 1.0 (ESP-12E Module)** from the Arduino IDE.

---

## Wi-Fi Connection Failed

**Possible Causes**

- Incorrect SSID
- Incorrect Password
- Weak Wi-Fi Signal

**Solution**

- Verify the Wi-Fi credentials in the firmware.
- Ensure the wireless router is powered on.
- Keep the ESP8266 within the router's coverage area.

---

## No Data on ThingSpeak

**Possible Causes**

- Invalid Write API Key
- Internet connection unavailable
- Incorrect channel configuration

**Solution**

- Verify the ThingSpeak Write API Key.
- Confirm that the Wi-Fi connection is active.
- Ensure the channel has been configured correctly.

---

## OLED Display Not Working

**Possible Causes**

- Incorrect wiring
- Wrong I²C address
- Loose connections

**Solution**

- Verify SDA and SCL connections.
- Confirm the OLED I²C address.
- Check all power and ground connections.

---

## Incorrect Heart Rate Readings

**Possible Causes**

- Finger movement
- Improper finger placement
- External light interference

**Solution**

- Keep your finger steady on the sensor.
- Apply gentle and consistent pressure.
- Allow a few seconds for the reading to stabilize.

---

# 🚀 Future Improvements

The current implementation provides a reliable IoT-based heart rate monitoring solution. However, the system can be further enhanced by integrating additional healthcare features and modern IoT technologies.

Potential future enhancements include:

- 🌡 Body Temperature Monitoring
- 🩸 Blood Oxygen (SpO₂) Monitoring
- ❤️ Blood Pressure Monitoring
- 📱 Android Mobile Application
- 🍎 iOS Mobile Application
- 🔔 Emergency Alert Notifications
- 📧 Email Notifications
- 📲 Telegram Integration
- ☁️ Firebase Cloud Support
- 📡 MQTT Protocol Support
- 🤖 AI-Based Health Analysis
- 📄 Automatic Health Report Generation
- 👨‍⚕️ Doctor Monitoring Dashboard
- 🏥 Hospital Database Integration
- 🔐 Secure Cloud Authentication

---

# 📚 Libraries Used

The following Arduino libraries were used during the development of this project.

| Library | Purpose |
|:---------|:--------|
| ESP8266WiFi | Wi-Fi Communication |
| ThingSpeak | Cloud Communication |
| Wire | I²C Communication |
| Adafruit GFX | Graphics Library |
| Adafruit SSD1306 | OLED Display Driver |

Ensure that the latest stable versions of these libraries are installed before compiling the firmware.

---

# 🤝 Contributing

Contributions are welcome and appreciated.

You can contribute by:

- Improving the firmware
- Optimizing the source code
- Fixing bugs
- Enhancing documentation
- Adding new healthcare sensors
- Improving cloud integration
- Implementing additional IoT features

Please read the **CONTRIBUTING.md** file before submitting a Pull Request.

---

# 🔒 Security

If you discover a security vulnerability, please report it responsibly.

Avoid disclosing security-related issues publicly. Refer to the **SECURITY.md** document for responsible disclosure guidelines.

---

# 📄 License

This project is licensed under the **MIT License**.

You are free to use, modify, and distribute this project for personal, academic, and commercial purposes, provided that the original license is retained.

For more information, see the **LICENSE** file included in this repository.

---

# 🙏 Acknowledgements

Special thanks to the open-source community and the organizations that provide the tools and libraries used in this project.

- Arduino Community
- ESP8266 Community
- Adafruit Industries
- MathWorks ThingSpeak
- Open Source Contributors

---

# 👨‍💻 Author

<div align="center">

## **ShivsFoundry**

**Embedded Systems Engineer • IoT Developer • PCB Designer • Open-Source Enthusiast**

Building practical Embedded Systems, IoT solutions, and innovative hardware projects for learning and real-world applications.

</div>

---

<div align="center">

## ⭐ If you found this project helpful, don't forget to Star the repository!

Your support motivates the development of more open-source Embedded Systems and IoT projects.

**Made with ❤️ by ShivsFoundry**

*Building Reliable Embedded Systems & IoT Solutions*

[⬆ Back to Top](#-iot-based-heart-rate-monitoring-system)

</div>
