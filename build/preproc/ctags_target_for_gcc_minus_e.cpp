# 1 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
/***********************************************************

Empty project skeleton

*************************************************************/
# 4 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;

void setup()
{
    pinMode(ledPin, 0x1);
    digitalWrite(ledPin, 0x1);

    while (millis() < 5000)
    {
        sensorValue = analogRead(A0);
        if (sensorValue > sensorHigh) {
            sensorHigh = sensorValue;
        }

        if (sensorValue < sensorLow) {
            sensorLow = sensorValue;
        }
    }

    digitalWrite(ledPin, 0x0);
}

void loop()
{
    sensorValue = analogRead(A0);
    int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

    tone(8, pitch, 20);

    delay(10);
}
