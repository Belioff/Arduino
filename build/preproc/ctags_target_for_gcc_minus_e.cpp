# 1 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
/***********************************************************

Empty project skeleton

*************************************************************/
# 4 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
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
        pinMode(x, 0x1);
    }

    pinMode(tiltSwitchPin, 0x0);
}

void loop()
{
    unsigned long currentTime = millis();
    if (currentTime - previousTime > interval)
    {
        previousTime = currentTime;
        digitalWrite(led, 0x1);
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
            digitalWrite(x, 0x0);
        }

        led = 2;
        previousTime = currentTime;
    }

    prevSwitchState = switchState;
}
