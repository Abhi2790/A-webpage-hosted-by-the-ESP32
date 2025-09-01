# 🌐 ESP32 Hello World Web Server

This project demonstrates how to run a **basic web server** on an ESP32 that serves a "Hello, World!" page.  
It’s the simplest way to get started with **ESP32 + WiFi + Web Development**.

---

## 🚀 Features
- Connects ESP32 to a WiFi network  
- Hosts a lightweight web server on port 80  
- Serves an HTML page with **Hello, World!**  
- Prints the ESP32’s IP address on the Serial Monitor  

---

## 📋 Requirements
- [Arduino IDE](https://www.arduino.cc/en/software)  
- [ESP32 Board Support](https://github.com/espressif/arduino-esp32) installed via Board Manager  
- ESP32 development board  
- WiFi network credentials  

---

## 🔧 Setup & Usage
1. Open the project in **Arduino IDE**  
2. Install **ESP32 support** if not already done:
   - `File` → `Preferences` → add this URL to *Additional Board Manager URLs*:  
     ```
     https://dl.espressif.com/dl/package_esp32_index.json
     ```
   - Then go to `Tools` → `Board` → `Boards Manager` → search **ESP32** → Install  
3. Select your ESP32 board under `Tools` → `Board`  
4. Replace `YOUR_SSID` and `YOUR_PASSWORD` in the code with your WiFi credentials  
5. Upload the code to your ESP32  
6. Open **Serial Monitor (115200 baud)**  
7. Copy the printed **IP Address** (e.g., `192.168.1.45`)  
8. Open it in a browser → ✅ You’ll see **Hello, World from ESP32!**  

---

## 📜 Example Output
**Serial Monitor**
