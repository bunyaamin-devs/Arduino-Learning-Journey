# LIGH DETECTOR

A beginner Arduino project that detects and monitors the amount of ambient light.

The LDR changes its resistance based on the amount of ambient light it receives. This change in resistance produces a corresponding voltage change in a voltage-divider circuit, which is read by the Arduino through an analog input pin.

Based on the measured voltage, the Arduino determines the light level and adjusts the buzzer output accordingly.
As the light intensity increases, the buzzer produces a higher frequency sound. As the light intensity decreases, the buzzer produces a lower fequency sound.

This project demonstrates analog input reading, voltage monitoring, and real-time response using Arduino and basic electronic components.

## 📚 Concepts Used
- Arduino structure (`setup()` and `loop()`)
- Analog Input
- `pinMode()`
- `delay()`
- `delayMiliseconds`
- `analogRead()`
- `digitalRead()`

## 🛠️ Components Used
- Arduino board
- Passive buzzers
- Resistors
- Breadboard
- Jumper wires
- Photoresistor