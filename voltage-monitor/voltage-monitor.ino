int readPin = A0;
int greenPin = 8;
int yellowPin = 9;
int redPin = 11;
int readVolt;
float voltageValue;
char message[] = "The potentiometer value is ";
int delayTime = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVolt = analogRead(readPin);
  voltageValue = (5./1023.) * readVolt;
  Serial.print(message);
  Serial.println(voltageValue);

  if (voltageValue >= 2.0 && voltageValue <= 3.0){
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  }
  if (voltageValue >= 3.0 && voltageValue <= 4.0){
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  if (voltageValue >= 4.0 && voltageValue <= 5.0){
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
  }
  if (voltageValue < 2.0 ){
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, LOW);
  }



  delay(delayTime);
}
