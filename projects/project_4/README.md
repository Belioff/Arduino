# Controlling RGB LED by Photoresistor

This Arduino project allows you to control an RGB LED based on the ambient light level sensed by a photoresistor. The LED will change colors depending on the amount of light detected by the photoresistor. The color transitions are predefined, and you can modify them as needed.

## Circuit Setup

Connect the components as follows:

- Photoresistor: Connect the photoresistor to analog pin A0 on the Arduino board.
- RGB LED Module: Connect the RGB LED module's R (Red), G (Green), and B (Blue) petals to digital pins 11, 10, and 9, respectively.

## How It Works

The Arduino code reads the analog value from the photoresistor using the `analogRead()` function, which converts the light intensity into a value between 0 and 1023. The code then interprets the sensor value and decides which color to display on the RGB LED based on predefined ranges.

The code defines a `color()` function that takes three parameters: red, green, and blue values. These values range from 0 to 255, corresponding to the intensity of each color. The function uses the `analogWrite()` function to generate PWM (Pulse Width Modulation) signals on the RGB LED pins, thereby controlling the brightness of each color and achieving various color combinations.

## Color Codes

The code provides three basic colors and several example blended colors:

- Basic Colors:
  - `color(255, 0, 0);` // Turn the RGB LED red
  - `color(0, 255, 0);` // Turn the RGB LED green
  - `color(0, 0, 255);` // Turn the RGB LED blue

- Example Blended Colors:
  - `color(255, 255, 0);` // Turn the RGB LED yellow
  - `color(255, 255, 255);` // Turn the RGB LED white
  - `color(128, 0, 255);` // Turn the RGB LED purple
  - `color(0, 0, 0);` // Turn the RGB LED off

## Color Transitions

The RGB LED's color transitions are defined based on the photoresistor readings:

- If the light level is between 0 and 332, the RGB LED will display white light.
- If the light level is between 333 and 665, the RGB LED will display yellow light.
- If the light level is 666 or above, the RGB LED will display red light.

Feel free to adjust these transitions or add your own based on the environmental conditions you wish to reflect with the RGB LED.

## Notes

- The code contains a line to output the raw sensor values to the Serial Monitor, allowing you to monitor the light sensor's readings for debugging purposes.
- There's a commented out code snippet in the `loop()` function that converts the analog output to RGB values for the RGB LED. You can use this section to experiment with different color mappings.

Have fun experimenting with this project and creating various color effects with your RGB LED! If you have any questions or improvements to suggest, feel free to reach out. Happy tinkering!