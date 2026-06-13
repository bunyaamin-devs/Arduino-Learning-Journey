int lightPin = A0;
int buzzPin = 8;
int lightVal;
int buzzDelay;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  buzzDelay = (9./530.) * lightVal - (1800./530.) + 1.;
  Serial.println(lightVal);

 digitalWrite(buzzPin, HIGH);
 delayMicroseconds(buzzDelay);
 digitalWrite(buzzPin, LOW);
 delayMicroseconds(buzzDelay);
}
