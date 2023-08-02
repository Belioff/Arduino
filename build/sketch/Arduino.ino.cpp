#include <Arduino.h>
#line 1 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
/***********************************************************
Empty project skeleton
*************************************************************/
const int tiltSwitchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int prevSwitchState = 0;
int led = 2;
long interval = 10000;

#line 11 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void setup();
#line 21 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void loop();
#line 11 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void setup()
{
    for (int x = 2; x < 8; x++)
    {
        pinMode(x, OUTPUT);
    }

    pinMode(tiltSwitchPin, INPUT);
}

void loop()
{
    unsigned long currentTime = millis();
    if (currentTime - previousTime > interval)
    {
        previousTime = currentTime;
        digitalWrite(led, HIGH);
        led++;
        if (led == 7)
        {
            // turoff
        }
    }

    switchState = digitalRead(tiltSwitchPin);
    if (switchState != prevSwitchState)
    {
        for (int x = 2; x < 8; x++)
        {
            digitalWrite(x, LOW);
        }

        led = 2;
        previousTime = currentTime;
    }

    prevSwitchState = switchState;
}
