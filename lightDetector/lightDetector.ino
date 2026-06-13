int lightPin = A0;
int darkPin = 8;
int brightPin = 12;
int lightVal;
int delayVal = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(darkPin, OUTPUT);
  pinMode(brightPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(delayVal);

  if(lightVal > 350){
    digitalWrite(brightPin, HIGH);
    digitalWrite(darkPin, LOW);
  }
  if(lightVal < 350){
    digitalWrite(darkPin, HIGH);
    digitalWrite(brightPin, LOW);
  }
}
