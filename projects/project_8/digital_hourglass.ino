/***********************************************************
File name: digital_hourglass.ino
Author: Emil
Date: 02/08/23
*************************************************************/
const int tiltSwitchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int prevSwitchState = 0;
int led = 2;
long interval = 10000;

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