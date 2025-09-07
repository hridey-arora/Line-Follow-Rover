# 🏁 Line Follower Robot – ESP32/ESP8266  

## 📖 Project Overview  
This project demonstrates a **Line Follower Robot** built using an **ESP microcontroller**, IR sensors, and DC motors.  
The ESP reads sensor values and controls the motors through an L298N/L293D motor driver to follow a black line on a white surface.  

Using ESP makes the robot more versatile, as you can later add **Wi-Fi or Bluetooth features** for remote monitoring or control.  

---

## ⚙️ Features  
- ✅ Detects black/white line using IR sensors.  
- ✅ Autonomous movement using motor driver & DC motors.  
- ✅ Runs on ESP32/ESP8266.  
- ✅ Expandable with IoT features (remote control, monitoring).  

---

## 🛠️ Components Used  
- ESP32 / ESP8266 NodeMCU  
- Motor Driver (L298N / L293D)  
- 2 IR Line Sensors (left + right)  
- 2 DC Motors + Robot chassis + caster wheel  
- Battery pack (7–12V)  
- Jumper wires  

---

## 🔌 Circuit Connections  

| Component        | ESP Pin |
|------------------|---------|
| Left IR Sensor   | D5 (GPIO14) |
| Right IR Sensor  | D4 (GPIO2)  |
| Motor Driver IN1 | D12 (GPIO12)|
| Motor Driver IN2 | D13 (GPIO13)|
| Motor Driver IN3 | D14 (GPIO14)|
| Motor Driver IN4 | D27 (GPIO27)|
| Motor Driver ENA | 5V / PWM    |
| Motor Driver ENB | 5V / PWM    |
| Motors           | Motor Driver Outputs |

*(You can reassign pins depending on your ESP board model.)*  

---

## 📜 How It Works  
1. **IR sensors** detect black/white path.  
2. ESP reads sensor states and controls motor driver inputs.  
3. Movement logic:  
   - Both sensors on white → Forward  
   - Left sensor on black → Left turn  
   - Right sensor on black → Right turn  
   - Both sensors on black → Stop  

---

## 💻 Usage Instructions  
1. Assemble the robot chassis with ESP + motor driver + sensors.  
2. Connect wiring as per the table.  
3. Upload `Line_Follower.ino` via Arduino IDE (select ESP board).  
4. Place robot on a track with a black line.  
5. Robot follows the line autonomously 🚗.  

---

## 🚀 Future Improvements  
- Add **3–5 sensors** for smoother path following.  
- Implement **PID control** for stability.  
- Integrate **Wi-Fi (ESP32)** to monitor speed & position remotely.  
- Expand into **maze-solving robot** with advanced algorithms.  

---
