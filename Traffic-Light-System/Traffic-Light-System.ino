int redLED = 8;
int yellowLED = 9;
int greenLED = 10;
int stopTIME = 5000;
int readyTIME = 2000;
int goTIME = 10000;
int delayTIME = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(redLED, HIGH);
  delay(stopTIME);
  digitalWrite(redLED, LOW);
  delay(delayTIME);

  digitalWrite(yellowLED, HIGH);
  delay(stopTIME);
  digitalWrite(yellowLED, LOW);
  delay(delayTIME);

  digitalWrite(greenLED, HIGH);
  delay(stopTIME);
  digitalWrite(greenLED, LOW);
  delay(delayTIME);
}
