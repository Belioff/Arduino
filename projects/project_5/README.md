# Mood Cue Project

This project, named "Mood Cue," involves an Arduino-controlled servo motor that responds to a potentiometer's position. As the potentiometer is adjusted, the servo motor's angle changes, creating a mood cue that can represent various moods or emotions.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Servo motor
- Potentiometer (connected to analog pin A0)

## Circuit Setup

Connect the components as follows:

- Servo Motor: Connect the signal wire of the servo to digital pin 9 on the Arduino board.

- Potentiometer: Connect one end of the potentiometer to the 5V pin and the other end to the GND pin on the Arduino board. Connect the middle pin (wiper) of the potentiometer to analog pin A0.

## How It Works

The Arduino code initializes the servo motor and sets up the Serial communication for debugging purposes. The loop continuously reads the analog value from the potentiometer using `analogRead()` and maps it to an angle suitable for controlling the servo motor with `map()`. The mapped angle is then sent to the servo using `myServo.write(angle)`, adjusting its position accordingly.

## Calibration

The potentiometer's analog output ranges from 0 to 1023, corresponding to the servo motor's angle range of 0 to 179 degrees. Ensure that the potentiometer is calibrated correctly so that it covers the desired angle range.

## Serial Monitor

For debugging and monitoring purposes, the code prints the raw potentiometer values (`potVal`) and the corresponding servo angles (`angle`) to the Serial Monitor.

## Usage

1. Upload the `mood_cue.ino` sketch to your Arduino board.
2. Connect the components as described in the circuit setup section.
3. Open the Arduino Serial Monitor to observe the potentiometer values and servo angles as you adjust the potentiometer.
4. Rotate the potentiometer to change the servo motor's position and create different mood cues.