# Worker-Safety-Wearable-System
Worker Safety Wearable System using Arduino Nano with MPU6050 and MQ-2 sensor for real-time fall detection, gas monitoring and instant alert system.

# 🦺 Worker Safety Wearable System

> A portable, real-time embedded safety device for hazardous work environments — no internet required.

---

## 📌 Overview

The **Worker Safety Wearable System** is a low-cost embedded system designed to protect workers in environments such as construction sites, factories, and mines. It continuously monitors motion and gas levels, detecting dangerous situations and triggering instant alerts — all without relying on an internet connection.

---

## ✨ Features

- 🤸 **Fall Detection** — Detects sudden impacts and abnormal tilt using accelerometer + gyroscope data
- 💨 **Hazardous Gas Monitoring** — Detects smoke, LPG, and combustible gases in real time
- 🔔 **Instant Alerts** — Audio (buzzer) and visual (LED) alerts triggered immediately on detection
- 📡 **Offline Operation** — Fully functional without internet or external connectivity
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

| Normal (Safe) | Gas Alert | Fall Detection | Circuit Setup |
|---|---|---|---|
| 🟢 Green LED ON | 🔴 Red LED ON | 🟡 Yellow LED ON | No alert state |

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

- **Kameshwaran Saravanan**
- **Asmita Pal**

---

> *A simple, scalable solution that can save lives in hazardous work environments.*
