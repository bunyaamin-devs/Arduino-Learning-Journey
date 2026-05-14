int readPin = A0;
int readValue = 0;
int delayTime = 1000;
float voltageRead = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(readPin);
  voltageRead = (5./1023.) * readValue;
  Serial.println(voltageRead);
  delay(delayTime);
}
