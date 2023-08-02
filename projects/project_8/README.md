# Digital Hourglass

![Arduino Digital Hourglass](https://example.com/path/to/digital_hourglass_image.png)

Welcome to the Digital Hourglass project! In this project, you will create a simulated hourglass effect using seven LEDs and a tilt switch as a control mechanism. When the tilt switch is tilted, the LEDs will light up sequentially, imitating the flow of sand in an hourglass. After a set interval, the LEDs will turn off one by one, simulating the emptying of the hourglass.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Seven LEDs (connected to digital pins 2 to 8)
- Tilt switch (connected to digital pin 8)

## Circuit Setup

Connect the components as follows:

- LEDs: Connect seven LEDs to digital pins 2 to 8 on the Arduino board. Each LED represents a segment of the hourglass.

- Tilt Switch: Connect the tilt switch to digital pin 8. When the tilt switch is tilted, it will change the state of the hourglass.

## How It Works

The Arduino code initializes the digital pins connected to the LEDs as outputs and the tilt switch pin as an input. The code will then monitor the tilt switch's state using `digitalRead()` and control the LEDs accordingly.

When the tilt switch is not tilted, the LEDs will remain off. When the tilt switch is tilted, the LEDs will light up one after another at a fixed interval, simulating the flow of sand in an hourglass. The variable `interval` (in milliseconds) determines the delay between lighting up each LED.

After the set interval, the LEDs will turn off sequentially in the opposite order, simulating the emptying of the hourglass.

## Usage

1. Upload the `digital_hourglass.ino` sketch to your Arduino board.
2. Connect the components as described in the circuit setup section.
3. Place the Arduino board in an upright position and observe the LEDs' behavior when the tilt switch is tilted.