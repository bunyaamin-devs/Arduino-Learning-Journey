String LEDcolor;
int blueLED = 7;
int redLED = 13;
int greenLED = 8;
String msg = "What color of LED did you want? ";


void setup() {
  // put your setup code here, to run once:
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);

  while(Serial.available() == 0){

  }

  LEDcolor = Serial.readString();

  if(LEDcolor == "blue"){
    digitalWrite(blueLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
  }
  if(LEDcolor == "red"){
    digitalWrite(blueLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  if(LEDcolor == "green"){
    digitalWrite(blueLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }
  if(LEDcolor == "off"){
    digitalWrite(blueLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
  }
  if(LEDcolor == "white"){
    digitalWrite(blueLED, HIGH);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, HIGH);
  }
  if(LEDcolor == "purple"){
    digitalWrite(blueLED, HIGH);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }
  if(LEDcolor == "aqua"){
    digitalWrite(blueLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }
  if(LEDcolor == "orange"){
    digitalWrite(blueLED, 0);
    digitalWrite(redLED, 255);
    digitalWrite(greenLED, 165);
  }
  if(LEDcolor == "violet"){
    digitalWrite(blueLED, 130);
    digitalWrite(redLED, 75);
    digitalWrite(greenLED, 0);
  }
  if(LEDcolor == "indigo"){
    digitalWrite(blueLED, 238);
    digitalWrite(redLED, 238);
    digitalWrite(greenLED, 130);
  }
}
