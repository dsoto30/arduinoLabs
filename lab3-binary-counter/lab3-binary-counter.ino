

int bit0 = 6;
int bit1 = 8;
int bit2 = 10;
int bit3 = 12;

int onDelay = 500;
int inBetweenDelay = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(bit0, OUTPUT);
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (unsigned int i = 0; i < 16; i++){

    if (i % 2 >= 1) {
      digitalWrite(bit0, HIGH);
    }
    else {
      digitalWrite(bit0, LOW);
    }
    if (i % 4 >= 2)
    {
      digitalWrite(bit1, HIGH);
    }
    else {
      digitalWrite(bit1, LOW);
    }
    if (i % 8 >= 4) {
    digitalWrite(bit2, HIGH);

    }
    else {
    digitalWrite(bit2, LOW);

    }
    if (i % 16 >= 8){
    digitalWrite(bit3, HIGH);

    }
    else {
    digitalWrite(bit3, LOW);

    }
    delay(inBetweenDelay);
  }

}
