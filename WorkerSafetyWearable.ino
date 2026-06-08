#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

// ---------------- PIN DEFINITIONS ----------------
const int greenLED = 6;
const int yellowLED = 7;
const int redLED = 8;
const int buzzer = 9;
const int gasSensor = A0;

// ---------------- THRESHOLDS ----------------
float fallThreshold = 0.97;   // fall if less than 0.95
int gasThreshold = 500;       // smoke threshold

// ---------------- VARIABLES ----------------
float totalAccel = 0;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.println("System Ready");
  delay(5000); // MQ2 warmup
}

void loop()
{
  // -------- GAS SENSOR --------
  int gasValue = analogRead(gasSensor);

  // -------- MPU6050 --------
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  float x = ax / 16384.0;
  float y = ay / 16384.0;
  float z = az / 16384.0;

  totalAccel = sqrt(x*x + y*y + z*z);

  // -------- CONDITIONS --------
  bool fallAlert = totalAccel < fallThreshold;   // LESS than 0.95
  bool smokeAlert = gasValue > gasThreshold;

  // -------- PRINT VALUES --------
  Serial.print("Smoke: ");
  Serial.print(gasValue);
  Serial.print(" | Fall value: ");
  Serial.println(totalAccel);

  // -------- ALERT LOGIC --------
  if (fallAlert)
  {
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, HIGH);

    Serial.println("FALL DETECTED (LOW ACCEL)");
  }
  else if (smokeAlert)
  {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, HIGH);

    Serial.println("SMOKE DETECTED");
  }
  else
  {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);

    Serial.println("SAFE");
  }

  Serial.println("------------------");

  delay(1000);
}
