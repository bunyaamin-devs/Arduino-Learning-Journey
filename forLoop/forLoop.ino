int yellowLED = 6;
int redLED = 9;
int delayTime = 1000;
int yellowInterval = 3;
int redInterval = 5;
int i;


void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < yellowInterval; i++){
    digitalWrite(yellowLED, HIGH);
    delay(delayTime);
    digitalWrite(yellowLED, LOW);
    delay(delayTime);
  }

  for(int i = 0; i < redInterval; i++){
    digitalWrite(redLED, HIGH);
    delay(delayTime);
    digitalWrite(redLED, LOW);
    delay(delayTime);
  }

}
