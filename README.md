# 📸 esp32-multicli

Welcome to `esp32-multicli`! This project revolves around creating a web interface for displaying feeds from ESP32-Camera modules or IP cameras. It's a fantastic way to integrate and monitor multiple camera feeds using the versatile ESP32 platform. Let's dive into the world of IoT and home surveillance with this exciting project!

## 📋 Required Equipment

To get started, you'll need the following items:
- **2x ESP32-CAM OV2640**: These are the camera modules that will capture and send the video feed.
- **1x ESP32 (Any Variant)**: This will act as the central unit to process and display the camera feeds.
- **Arduino IDE**: The integrated development environment (IDE) to program your ESP32 modules.
- **A Mobile Device**: For accessing the web interface and viewing the camera feeds.

## 🛠 Setup Guide

Setting up your ESP32-CAMs is straightforward. Follow these steps to get everything up and running:

### Step 1: Download and Open the ESP-CAM Server

First, grab the ESP-CAM server code from here: [ESP-cam-server](https://github.com/easytarget/esp32-cam-webserver). Open the downloaded code in the Arduino IDE.

![Arduino IDE Setup](https://github.com/ConTronTech/esp32-multicli/assets/120324560/137e92e3-dc75-4962-b86c-26420b840db7)

### Step 2: Modify Configuration Files

Change a couple of lines in the ESP-CAM code to prevent the camera from going into access point mode. You'll find these under the section "Primary config, or defaults." Replace `myconfig.h` with `myconfig.sample.h`.

![Change Config Lines](https://github.com/ConTronTech/esp32-multicli/assets/120324560/89a88d7a-cee6-43dd-aca0-3a23db1bd614)

![Config Modification](https://github.com/ConTronTech/esp32-multicli/assets/120324560/06b1d03f-d849-4996-8825-330f8bc1e879)

### Step 3: Set Up Wi-Fi Credentials

Configure your Wi-Fi SSID and password in the ESP-CAM settings. Remember to use the same credentials across all devices. Upload this sketch to your ESP32-cam boards.

![Setting SSID and Password](https://github.com/ConTronTech/esp32-multicli/assets/120324560/4c2ba549-844d-4aaf-abe7-9a851516e751)

![Wi-Fi Configuration](https://github.com/ConTronTech/esp32-multicli/assets/120324560/7b23e964-f546-4883-a7c2-f39f2f336a33)

### Step 4: Upload to ESP32

Open the `esp-cam-multicli.ino` file and input the same SSID and password. Upload this sketch to your ESP32 board.

![Upload to ESP32](https://github.com/ConTronTech/esp32-multicli/assets/120324560/b6264273-260e-4c50-a4db-3c45b4a7b8f5)

### Step 5: Enjoy Your Project

Once everything is set up, enjoy monitoring your space with your newly configured ESP32-CAM setup!

### Note about the esp

The esp can only handle up to 3 cameras with a moderate amount of performance loss so this project is locked to only 2 cameras.

---

Good luck with your project! 🚀👨‍💻
