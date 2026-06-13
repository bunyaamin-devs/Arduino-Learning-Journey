int yellowLED = 7;
int redLED = 8;
int greenLED = 12;
int buzzPin = 11;   

int melody[] = {
  264, 264, 297, 264, 352, 330,
  264, 264, 297, 264, 396, 352,
  264, 264, 528, 440, 352, 330, 297,
  466, 466, 440, 352, 396, 352
};

int duration[] = {
  250, 250, 500, 500, 500, 1000,
  250, 250, 500, 500, 500, 1000,
  250, 250, 500, 500, 500, 500, 1000,
  250, 250, 500, 500, 500, 1000
};

void setup() {

  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzPin, OUTPUT);

  for (int i = 0; i < 25; i++) {

    tone(buzzPin, melody[i], duration[i]);

    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);

    if (i == 24) {
      digitalWrite(yellowLED, HIGH);
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, HIGH);
    }
    else if (i % 3 == 0) {
      digitalWrite(yellowLED, HIGH);
    }
    else if (i % 3 == 1) {
      digitalWrite(redLED, HIGH);
    }
    else {
      digitalWrite(greenLED, HIGH);
    }

    delay(duration[i]);
  }

  noTone(buzzPin);

  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, HIGH);
}

void loop() {

}