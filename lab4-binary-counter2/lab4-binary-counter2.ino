

int bit0 = 13;
int bit1 = 12;
int bit2 = 11;
int bit3 = 10;
int bit4 = 9;

int onDelay = 500;
int inBetweenDelay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(bit0, OUTPUT);
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);
  pinMode(bit4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (unsigned int i = 0; i < 32; i++) {

    if (i % 2 >= 1) {
      digitalWrite(bit0, HIGH);
    } else {
      digitalWrite(bit0, LOW);
    }
    if (i % 4 >= 2) {
      digitalWrite(bit1, HIGH);
    } else {
      digitalWrite(bit1, LOW);
    }
    if (i % 8 >= 4) {
      digitalWrite(bit2, HIGH);
    } else {
      digitalWrite(bit2, LOW);
    }
    if (i % 16 >= 8) {
      digitalWrite(bit3, HIGH);

    } else {
      digitalWrite(bit3, LOW);
    }

    if (i % 32 >= 16) {
      digitalWrite(bit4, HIGH);
    } else {
      digitalWrite(bit4, LOW);
    }

    delay(inBetweenDelay);
  }
}
