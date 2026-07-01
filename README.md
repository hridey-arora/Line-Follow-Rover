# 🏁 Line Follower Robot – ESP32/ESP8266

## 📖 Project Overview
This project demonstrates a **line follower robot** built using an ESP microcontroller, IR sensors, and DC motors.

The ESP reads sensor values and controls the motors through an L298N/L293D motor driver so the robot can follow a black line on a white surface.

Using an ESP board makes the robot easier to expand later with Wi-Fi or Bluetooth features for remote monitoring or control.

---

## ⚙️ Features
- ✅ Detects black/white track lines using IR sensors.
- ✅ Controls movement through a motor driver and DC motors.
- ✅ Runs on ESP32/ESP8266-style boards with adjustable pin mappings.
- ✅ Expandable with IoT features such as remote control or telemetry.

---

## 🛠️ Components Used
- ESP32 / ESP8266 NodeMCU
- Motor driver such as L298N or L293D
- 2 IR line sensors, left and right
- 2 DC motors, robot chassis, and caster wheel
- Battery pack, typically 7V to 12V depending on the motor driver
- Jumper wires

---

## 🔌 Circuit Connections

The table below matches the current `Line_Follower.ino` sketch.

| Component | ESP Pin |
|---|---|
| Left IR Sensor | D5 / GPIO14 |
| Right IR Sensor | D4 / GPIO2 |
| Motor Driver IN1 | GPIO12 |
| Motor Driver IN2 | GPIO13 |
| Motor Driver IN3 | GPIO27 |
| Motor Driver IN4 | GPIO26 |
| Motor Driver ENA | 5V or PWM-capable speed pin |
| Motor Driver ENB | 5V or PWM-capable speed pin |
| Motors | Motor driver outputs |

> Note: ESP board labels vary. If your board does not expose the same `D` labels, use the GPIO numbers from the sketch.

---

## 📜 How It Works
1. The IR sensors detect whether each side is over the black line or white surface.
2. The ESP reads both sensor states.
3. The sketch controls the motor driver:
   - Both sensors on white → move forward
   - Left sensor on black → turn left
   - Right sensor on black → turn right
   - Both sensors on black → stop

---

## 💻 Usage Instructions
1. Assemble the robot chassis with ESP board, motor driver, sensors, and motors.
2. Connect the wiring according to the table above.
3. Open `Line_Follower.ino` in the Arduino IDE.
4. Select the correct ESP board and port.
5. Upload the sketch.
6. Place the robot on a high-contrast black-line track and test movement.

---

## 🚀 Future Improvements
- Add 3 to 5 sensors for smoother path tracking.
- Implement PID control for stability.
- Add PWM speed control for sharper turns.
- Integrate Wi-Fi telemetry on ESP32.
- Expand into a maze-solving robot with advanced algorithms.

---
