# PicoTones

## Group Members
- Saumya Saini (200901)
- Sandhya Narwade (200858)
- Pallavi (200661)

## Ideation
The PicoTones project aims to develop an interactive instrument that generates sound when keys are touched, utilizing an IR sensor to detect key movements, an Arduino for processing sensor input, and a speaker for sound output. A detailed system design has been created, incorporating the integration of the IR sensor, Arduino, and speaker into a functional piano. Connections and communication between the components have been defined, with considerations for programming logic, wiring, and mounting arrangements. A functional prototype of the musical piano has been built, and Arduino code has been implemented to process IR sensor input, generate sound signals, and control speaker output.

## Sensor
An IR sensor is employed to detect key presses or releases. By emitting infrared radiation and measuring the reflected radiation, the IR sensor identifies changes in reflection caused by the interruption of the IR beam when a finger is above the sensor. This allows the sensor to determine the pressed or released key based on the detected reflection change.

## Actuator
The speaker acts as an actuator by producing sound in response to input from the IR sensor and Arduino. The Arduino processes IR sensor input, determines the pressed/released key, generates corresponding sound signals, and sends them to the speaker. The speaker converts electrical signals into audible sound waves, becoming the musical piano's sound output.

## Development Board
The Arduino board plays a significant role by processing input from the IR sensor, generating sound signals based on processed input, and controlling the speaker for corresponding sound output.

## Explaination of working

<P><img src= "https://github.com/pallav0id/Uber-Data-Analysis/assets/82913441/ee864dc6-2539-47d9-985c-6c548c08c42a"></P>
<p><img src="https://github.com/pallav0id/Uber-Data-Analysis/assets/82913441/d0f52e13-e369-4bc0-8b53-cd6f7e0dc0b5"></p>


The PicoTones project utilizes IR sensors, an Arduino board, and a speaker to create an interactive instrument that produces sound when keys are touched. Here's an explanation of how it works: 
* IR sensor detects the movement of fingers on the piano. When a finger is kept above the IR sensor, it senses the change in infrared light reflection and generates an electrical signal as input for the Arduino. 
* The Arduino board acts as the central processing unit of the system. It receives input signals from the IR sensor and processes them to generate sound signals for the speaker. The Arduino is programmed with logic that maps the sensor input to corresponding musical notes or tones. 
* The speaker is used for producing the sound output of the piano. It is connected to the Arduino through Low Pass Filter which allows only low-frequency signals. When the Arduino processes the input from the IR sensor and generates the appropriate sound signals, the speaker produces the corresponding musical notes, creating the sound of a piano.<br>


In the program, a set of 8 digital sensors are used, connected to pins 2 to 9 to play different musical notes on a buzzer connected to pin 10. The code defines the frequencies of eight musical notes (C3, D3, E3, F3, G3, A3, B3, and C4) and stores them in an array called "freq". It also defines an array "sensorPins" to store the pins to which the sensors are connected. 
In the "setup()" function, the code sets the sensor pins (2 to 9) as inputs and sets their initial state to HIGH to enable the sensors to detect LOW signals when they are triggered. It also sets the speaker pin 10 as output and sets its initial state to LOW to keep the speaker off. 
In the "loop()" function, the code reads the state of each sensor using "digitalRead()" and prints the values to the serial monitor. If a sensor is triggered (reads LOW), it plays the corresponding musical note on the speaker using the "tone()" function, which takes the speaker pin, the frequency of the note, and the duration (20 milliseconds) as arguments. The frequency of the note is obtained from the "freq" array based on the index of the triggered sensor. The code loops through all the sensors and continuously checks their states to play the appropriate musical notes on the buzzer when the sensors are triggered. 

Prototype:
<p><img src="https://github.com/pallav0id/Uber-Data-Analysis/assets/82913441/00a7c6ac-6922-4dc6-888d-dfa3a44fa618"></p>
<p><img src="https://github.com/pallav0id/Uber-Data-Analysis/assets/82913441/b9cab658-6d2e-4fac-8d7c-26f46317e342"></p>
<p><img src="https://github.com/pallav0id/Uber-Data-Analysis/assets/82913441/4c75cd45-bcdc-4673-a2aa-0b61137bd463"></p>

