# LIGH DETECTOR

A beginner Arduino project that detects and monitors the amount of ambient light.

The LDR changes its resistance based on the amount of ambient light it receives. This change in resistance produces a corresponding voltage change in a voltage-divider circuit, which is read by the Arduino through an analog input pin.

Based on the measured voltage, the Arduino determines the light level and controls the LEDs accordingly. Higher light levels activate the green LED, while lower light levels activate the red LED.

# FIRMWARE LOGIC
Threshold: 350 (0–1023 scale). 
- Readings ≥ 350 → green LED on; 
- Readings < 350 → red LED on.

This project demonstrates analog input reading, voltage monitoring, and real-time response using Arduino and basic electronic components.

## 📚 Concepts Used
- Arduino structure (`setup()` and `loop()`)
- Analog Input
- `pinMode()`
- `delay()`
- `analogRead()`
- `digitalRead()`

## 🛠️ Components Used
- Arduino board
- LEDs
- Resistors
- Breadboard
- Jumper wires
- Photoresistor