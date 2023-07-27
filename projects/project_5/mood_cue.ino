/***********************************************************
File name: mood_cue.ino
Author: Emil
Date: 27/07/23
*************************************************************/
#include <Servo.h>
Servo myServo;

int const potPin = A0;
int potVal;
int angle;

void setup()
{
    myServo.attach(9);

    Serial.begin(9600);
}

void loop()
{
    potVal = analogRead(potPin);
    Serial.println("potVal: ");
    Serial.println(potVal);

    angle = map(potVal, 0, 1023, 0, 179);
    Serial.println(", angle: ");
    Serial.println(angle);

    myServo.write(angle);
    delay(15);
}