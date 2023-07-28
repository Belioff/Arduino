#include <Arduino.h>
#line 1 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
/***********************************************************
Empty project skeleton
*************************************************************/
int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;

const int ledPin = 13;

#line 10 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void setup();
#line 30 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void loop();
#line 10 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void setup()
{
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, HIGH);

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

    digitalWrite(ledPin, LOW);
}

void loop()
{
    sensorValue = analogRead(A0);
    int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

    tone(8, pitch, 20);

    delay(10);
}
