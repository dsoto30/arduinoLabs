int redPin = 11;

int bright1 = 10;
int bright2 = 40;
int bright3 = 125;
int bright4 = 200;
int bright5 = 255;

int betweenDelay = 750;

void setup() { pinMode(redPin, OUTPUT); }

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(redPin, bright1);

  delay(betweenDelay);

  analogWrite(redPin, bright2);

  delay(betweenDelay);

  analogWrite(redPin, bright3);

  delay(betweenDelay);

  analogWrite(redPin, bright4);

  delay(betweenDelay);

  analogWrite(redPin, bright5);

  delay(betweenDelay);
}
