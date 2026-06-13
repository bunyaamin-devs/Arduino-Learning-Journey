int i;
int blinkNum;
int LED = 13;
int LED1 = 8;
String msg = "How many blink/s do you want: ";
int delayTime = 750;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){

  }

  blinkNum = Serial.parseInt();
  Serial.println(blinkNum);

  for(int i = 0; i < blinkNum; i++){
    digitalWrite(LED, HIGH);
    delay(delayTime);
    digitalWrite(LED, LOW);
    delay(delayTime);
    digitalWrite(LED1, HIGH);
    delay(delayTime);
    digitalWrite(LED1, LOW);
    delay(delayTime);
  }

}
