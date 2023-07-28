# Light Theremin Project

Welcome to the Light Theremin project! In this project, you will create a musical instrument using an Arduino board that generates different tones based on the intensity of light detected by a photoresistor. As you move your hand closer or farther from the photoresistor, the pitch of the tones will change, allowing you to create beautiful soundscapes.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Photoresistor (connected to analog pin A0)
- Resistor (if required, to create a voltage divider with the photoresistor)
- Speaker or piezo buzzer (connected to digital pin 8)
- LED (optional, connected to digital pin 13 for calibration)

## Circuit Setup

Connect the components as follows:

- Photoresistor: Connect the photoresistor to analog pin A0 on the Arduino board. Depending on the photoresistor's resistance range, you may need to use a resistor to create a voltage divider for accurate readings.

- Speaker/Buzzer: Connect the speaker or piezo buzzer to digital pin 8.

- LED (optional): To calibrate the light theremin, you can temporarily connect an LED to digital pin 13 and GND. This will help you determine the minimum and maximum sensor values during the calibration phase.

## Calibration

The light theremin requires a calibration phase at startup to determine the minimum and maximum sensor values. During the first 5 seconds after uploading the code, the LED (if connected) will be lit to indicate calibration. Move your hand closer and farther from the photoresistor to capture the sensor's lowest and highest values. Once calibration is complete, the LED will turn off, and the light theremin will be ready to play.

## How It Works

In the `setup()` function, the code sets up the LED pin as an output and performs the calibration. During calibration, it reads the analog values from the photoresistor and determines the highest and lowest values to map the sensor readings later.

In the `loop()` function, the code reads the analog value from the photoresistor and maps it to a range of frequencies suitable for the speaker or piezo buzzer. As you move your hand closer or farther from the photoresistor, the pitch of the tone will change, producing a musical effect.

## Usage

1. Upload the `light_teremin.ino` sketch to your Arduino board.
2. Connect the components as described in the circuit setup section.
3. If using the optional LED for calibration, observe its state during the calibration phase.
4. After calibration, the light theremin will be ready to play.
5. Move your hand closer or farther from the photoresistor to generate different tones and create music with the light theremin.