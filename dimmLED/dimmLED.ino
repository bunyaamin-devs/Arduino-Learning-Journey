int potPin = A0;
int ledPin = 6;
int potVal;
float ledVal; 
float voltageVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  ledVal = (255./1023.) * potVal;
  // Serial.println(ledVal);
  analogWrite(ledPin, ledVal);
}
