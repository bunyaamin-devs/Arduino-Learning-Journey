int potPin = A0;
int buzzPin = 12;
float potVal;
float voltVal;
String msg = "The volt is ";
int dt = 500;
int dt1 = 2000;
int dt2 = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  voltVal = (5./1023.) * potVal;
  delay(dt);

  Serial.print(msg);
  Serial.println(voltVal);

  if(voltVal >= 4.50 && voltVal <= 5.00){
    digitalWrite(buzzPin, HIGH);
    delay(dt2);
    digitalWrite(buzzPin, LOW);
    delay(dt2);
  }
  if(voltVal >= 4.00 && voltVal <= 4.50){
    digitalWrite(buzzPin, HIGH);
    delay(dt1);
    digitalWrite(buzzPin, LOW);
    delay(dt1);
  }
}
