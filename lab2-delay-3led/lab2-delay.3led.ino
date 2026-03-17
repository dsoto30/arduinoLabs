int redLedPin = 6;
int greenLedPin = 11;
int blueLedPin = 8;

int redLedDelay = 50;
int greenLedDelay = 500;
int blueLedDelay = 1000;

void setup()
{
    pinMode(redLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(blueLedPin, OUTPUT);
}

void loop()
{

    for (int i = 0; i < 5; i++)
    {
        digitalWrite(redLedPin, HIGH);
        delay(redLedDelay);
        digitalWrite(redLedPin, LOW);
        delay(redLedDelay);
    }

    delay(1000);

    for (int i = 0; i < 10; i++)
    {
        digitalWrite(greenLedPin, HIGH);
        delay(greenLedDelay);
        digitalWrite(greenLedPin, LOW);
        delay(greenLedDelay);
    }

    delay(1000);

    for (int i = 0; i < 15; i++)
    {
        digitalWrite(blueLedPin, HIGH);
        delay(blueLedDelay);
        digitalWrite(blueLedPin, LOW);
        delay(blueLedDelay);
    }

    delay(1000);
}