#line 1 "/Users/emilbelyov/Projects/Arduino Project/Arduino/projects/project_7/README.md"
# Arduino Melody Generator with Button Inputs

Welcome to the Arduino Melody Generator project! In this project, you will create a simple melody generator using an Arduino board and four buttons. Each button is connected to a different resistor, and pressing a button will vary the analog input value, producing different tones through a speaker or piezo buzzer.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Four buttons with resistors (connected to analog pin A0)
- Speaker or piezo buzzer (connected to digital pin 8)

## Circuit Setup

Connect the components as follows:

- Buttons: Connect each button to analog pin A0 on the Arduino board. Each button should be connected through a different resistor, and pressing a button will change the analog input value.

- Speaker/Buzzer: Connect the speaker or piezo buzzer to digital pin 8.

## How It Works

In this project, the Arduino code reads the analog value from the four buttons and their corresponding resistors. Based on the analog value's range for each button press, different notes are played through the speaker or piezo buzzer.

The code defines an array `notes[]` containing four frequencies representing the notes C4, D4, E4, and F4. As you press each button, the analog value from the corresponding resistor will be read and used to determine the note to play.

## Note Frequencies

The `notes[]` array contains the following note frequencies:

- C4: 262 Hz
- D4: 294 Hz
- E4: 330 Hz
- F4: 349 Hz

## Usage

1. Upload the `melody_generator.ino` sketch to your Arduino board.
2. Connect the components as described in the circuit setup section.
3. Press the different buttons connected to the resistors to generate the corresponding notes through the speaker or buzzer.