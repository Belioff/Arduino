#include <Arduino.h>
#line 1 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
/***********************************************************
Empty project skeleton
*************************************************************/
int notes[] = {262, 294, 330, 349};

#line 6 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void setup();
#line 11 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void loop();
#line 6 "/Users/emilbelyov/Projects/Arduino Project/Arduino/Arduino.ino"
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int keyVal = analogRead(A0);
    Serial.println(keyVal);

    if (keyVal == 1023)
    {
        tone(8, notes[0]);
    }
    else if (keyVal >= 850 && keyVal <= 1010)
    {
        tone(8, notes[1]);
    }
    else if (keyVal >= 100 && keyVal <= 850)
    {
        tone(8, notes[2]);
    }
    else if (keyVal >= 90 && keyVal <= 100)
    {
        tone(8, notes[3]);
    } else 
    {
        noTone(8);
    }
}
