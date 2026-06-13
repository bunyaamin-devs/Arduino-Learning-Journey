int redPin = 9;
int bright = 255;
int medium = 125;
int dim = 50;
int dimmer = 25;
int dimmest = 5;
int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, dimmest);
  delay(delayTime);

  analogWrite(redPin, dimmer);
  delay(delayTime);

  analogWrite(redPin, dim);
  delay(delayTime);

  analogWrite(redPin, medium);
  delay(delayTime);

  analogWrite(redPin, bright);
  delay(delayTime);


}
