/***********************************************************
File name: controlling_RGB_LED_by_photoresistor.ino
Author: Emil
Date: 24/07/23
*************************************************************/
// Photoresistor pin connected to A0
const int lightSensorPin = A0;

// pins:
int redPin = 11;   // R petal on RGB LED module connected to digital pin 11
int greenPin = 10; // G petal on RGB LED module connected to digital pin 10
int bluePin = 9;   // B petal on RGB LED module connected to digital pin 9

// input values
int lightSensorValue = 0;

// output values
int lightValue = 0;

void setup()
{
    Serial.begin(115200);

    pinMode(redPin, OUTPUT);   // sets the redPin to be an output
    pinMode(greenPin, OUTPUT); // sets the greenPin to be an output
    pinMode(bluePin, OUTPUT);  // sets the bluePin to be an output
}
void loop() // run over and over again
{
    // read phototransistors
    lightSensorValue = analogRead(lightSensorPin);

    Serial.println("Raw Sensor Values - Light: ");
    Serial.println(lightSensorValue);

    // the following code is not used, however, it can be for converting the output
    // 0-1023 -> 0-255 - convert analog output to RGB value for RGBLED
    // lightValue = lightSensorValue / 4;
    // color(lightValue, 0, 0); // turn the RGB LED red

    if (lightSensorValue > 0 && lightSensorValue < 333)
    {
        color(255,255,255);
    }
    else if (lightSensorValue >= 333 && lightSensorValue < 666)
    {
        color(255,255,0);
    }
    else if (lightSensorValue >= 666)
    {
        color(255, 0, 0);
    }

    delay(250);
}

/*
The color generating function
- Basic colors:
color(255, 0, 0); // turn the RGB LED red
color(0,255, 0);  // turn the RGB LED green
color(0, 0, 255); // turn the RGB LED blue

// Example blended colors:
color(255,255,0);   // turn the RGB LED yellow
color(255,255,255); // turn the RGB LED white
color(128,0,255);   // turn the RGB LED purple
color(0,0,0);      // turn the RGB LED off
*/
void color(unsigned char red, unsigned char green, unsigned char blue)
{
    analogWrite(redPin, red);     // PWM signal output
    analogWrite(greenPin, green); // PWM signal output
    analogWrite(bluePin, blue);   // PWM signal output
}