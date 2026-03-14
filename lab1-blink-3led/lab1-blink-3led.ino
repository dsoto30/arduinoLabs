int redLedPin = 6;
int greenLedPin = 11;
int blueLedPin = 8;

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
        delay(500);
        digitalWrite(redLedPin, LOW);
        delay(500);
    }

    delay(1000);

    for (int i = 0; i < 10; i++)
    {
        digitalWrite(greenLedPin, HIGH);
        delay(500);
        digitalWrite(greenLedPin, LOW);
        delay(500);
    }

    delay(1000);

    for (int i = 0; i < 15; i++)
    {
        digitalWrite(blueLedPin, HIGH);
        delay(500);
        digitalWrite(blueLedPin, LOW);
        delay(500);
    }

    delay(1000);
}
