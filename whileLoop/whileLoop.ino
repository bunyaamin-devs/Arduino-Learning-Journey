int readPin = A0;
int RED_LED = 8;
int readVoltage;
float voltageVal;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVoltage = analogRead(readPin);
  voltageVal = (5.0/1023.) * readVoltage;
  Serial.println(voltageVal);
  delay(delayTime);

  while(voltageVal > 4.0){
    digitalWrite(RED_LED, HIGH);
    readVoltage = analogRead(readPin);
    voltageVal = (5.0/1023.) * readVoltage;
    Serial.println(voltageVal);
    delay(delayTime);
  }
  digitalWrite(RED_LED, LOW);
}
