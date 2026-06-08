# Worker-Safety-Wearable-System
Worker Safety Wearable System using Arduino Nano with MPU6050 and MQ-2 sensor for real-time fall detection, gas monitoring and instant alert system.

# 🦺 Worker Safety Wearable System

> A portable, real-time embedded safety device for hazardous work environments.

---

## 📌 Overview

The **Worker Safety Wearable System** is a low-cost embedded system designed to protect workers in environments such as construction sites, factories, and mines. It continuously monitors motion and gas levels, detecting dangerous situations and triggering instant alerts — all without relying on an internet connection.

---

## ✨ Features

- 🤸 **Fall Detection** — Detects sudden impacts and abnormal tilt using accelerometer + gyroscope data
- 💨 **Hazardous Gas Monitoring** — Detects smoke, LPG, and combustible gases in real time
- 🔔 **Instant Alerts** — Audio (buzzer) and visual (LED) alerts triggered immediately on detection
- 📲 **App-Integrated Monitoring** — Sensor readings are transmitted and can be tracked in real time through a connected application
- 💰 **Low-Cost & Scalable** — Built within a ₹1,000–₹2,000 budget, suitable for real-world deployment

---

## 🎯 Project Objectives

| Objective | Details |
|---|---|
| Wearable Design | Compact, battery-powered, portable device |
| Continuous Monitoring | Real-time data from sensors at all times |
| Fall Detection | Uses MPU6050 to detect sudden impact and abnormal tilt |
| Gas Detection | MQ-2 sensor detects smoke, LPG, and combustible gases |
| Instant Alerts | Buzzer (audio) + LEDs (visual) — no delay |
| Low Cost | ₹1,000–₹2,000 total build cost |

---

## 🔧 Components Used

| Component | Function |
|---|---|
| Arduino Nano | Main microcontroller |
| MPU6050 | Motion detection (accelerometer + gyroscope) |
| MQ-2 Sensor | Gas detection (smoke, LPG, combustibles) |
| Green LED | Safe / normal condition indicator |
| Yellow LED | Fall detected indicator |
| Red LED | Hazardous gas indicator |
| Buzzer | Audible alert on fall or gas detection |
| Jumper Wires | Component connections |
| Resistors (220Ω) | LED current protection |

---

## ⚙️ System Working

```
Step 1 — Power ON
  └─ Battery powers Arduino Nano and all connected components

Step 2 — Initialization
  └─ Arduino initializes MPU6050, MQ-2 sensor, LEDs, and buzzer

Step 3 — Continuous Monitoring
  ├─ MPU6050 → reads accelerometer + gyroscope data
  └─ MQ-2    → reads analog gas concentration value

Step 4 — Data Processing
  ├─ Gas value compared against threshold
  └─ Total acceleration calculated:
       totalAccel = sqrt(x² + y² + z²)

Step 5 — Decision Logic
  IF fall detected   → Yellow LED ON + Buzzer ON
  IF gas detected    → Red LED ON   + Buzzer ON
  ELSE               → Green LED ON  (safe)
```

---

## 🚨 Alert System

| Condition | LED | Buzzer | Meaning |
|---|---|---|---|
| Normal / Safe | 🟢 Green | OFF | All readings within safe range |
| Fall Detected | 🟡 Yellow | 🔊 ON | Worker has fallen |
| Gas Detected | 🔴 Red | 🔊 ON | Hazardous gas concentration detected |

---

## 📸 Project Images

### 🟢 Normal Condition (Safe)
<img width="1375" height="1600" alt="green" src="https://github.com/user-attachments/assets/b8a42e57-b5bd-493d-8f5b-eacba2282e96" />

### 🔴 Gas Alert
<img width="1600" height="1170" alt="red" src="https://github.com/user-attachments/assets/3794f7c5-474a-41de-8c93-f39404ad5b3d" />

### 🟡 Fall Detection
<img width="1500" height="1567" alt="yellow" src="https://github.com/user-attachments/assets/91731f6d-3a2d-4ac6-b898-c07c2f7a2008" />

### 🔧 Circuit Setup (No Alert)
  - ## TOP VIEW
<img width="960" height="904" alt="c1" src="https://github.com/user-attachments/assets/203ca030-57e1-4329-b709-9f7425930f4b" />

  - ## SIDE VIEW
<img width="1595" height="1259" alt="c2" src="https://github.com/user-attachments/assets/47daf79b-3547-4a9e-9186-cfddb9ab8c37" />


---

## 📸 Serial Monitor Output

| 🟢 Normal | 🔴 Gas Alert | 🟡 Fall Detected |
|---|---|---|
| ![Normal](<img width="444" height="272" alt="safe" src="https://github.com/user-attachments/assets/75378d72-3255-4da6-bf5e-1540aa8fb4cf" />) | ![Gas](<img width="431" height="248" alt="smoke" src="https://github.com/user-attachments/assets/744e5b94-03cd-44f1-a61e-685ff57da195" />) | ![Fall](<img width="465" height="259" alt="fall" src="https://github.com/user-attachments/assets/360610df-3e16-4ef2-9877-f1a9c4e1bedf" />) |

---

## 📊 Outcomes

### Technical
- Real-time embedded system with sensor integration
- Threshold-based decision logic for immediate response

### Safety
- Detects both falls and toxic/combustible gases
- Instant multi-modal alerting (audio + visual)

### Practical
- Low-cost build (₹1,000–₹2,000)
- Portable and wearable form factor
- Scalable for industrial and field deployment

---

## 💡 Conclusion

This project demonstrates a **low-cost, real-time wearable safety system** that enhances worker protection by detecting falls and hazardous gases and providing instant, multi-modal alerts — with no internet dependency. Its simplicity, affordability, and effectiveness make it a practical solution for real-world hazardous environments.

---

## 👥 Authors

- **Asmita Pal**
- **Kameshwaran Saravanan**


---

> *A simple, scalable solution that can save lives in hazardous work environments.*
