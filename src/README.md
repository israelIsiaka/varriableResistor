# Arduino Potentiometer Voltage Reader

A simple Arduino project that reads analog voltage from a potentiometer (variable resistor) and displays the value on the Serial Monitor.

This project also documents **common beginner mistakes** such as floating analog inputs, incorrect grounding, and misuse of the VIN pin — and how to fix them.

---

## 📌 Overview

- Reads analog voltage using Arduino ADC
- Converts raw ADC values to real voltage
- Demonstrates correct potentiometer wiring
- Explains common pitfalls and debugging lessons

Ideal for beginners learning **Arduino, analog inputs, and basic electronics**.

---

## 🧰 Components Used

- Arduino Uno / Nano
- 10kΩ Potentiometer (variable resistor)
- Breadboard
- Jumper wires
- USB cable

---

## 🔌 Wiring

### Potentiometer Connections

| Potentiometer Pin | Arduino Pin |
|------------------|------------|
| Left outer pin   | GND        |
| Middle pin       | A2         |
| Right outer pin  | 5V         |

**Orientation**
- Knob facing you
- Pins pointing downward

Turning the knob clockwise increases voltage.

---

## 🧠 How It Works

- The potentiometer acts as a **voltage divider**
- Rotating the knob changes the voltage on the middle pin
- Arduino’s ADC converts the voltage into a value between `0–1023`
- The voltage is calculated and printed to the Serial Monitor

---

## 💻 Code

```cpp
const int inputVoltage = A2;
int readVoltage;
float outputVoltage;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readVoltage = analogRead(inputVoltage);
  outputVoltage = readVoltage * (5.0 / 1023.0);
  Serial.println(outputVoltage);
  delay(250);
}
