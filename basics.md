# Arduino: Foundations

[](https://github.com/Archit-Jain-Github/arduinoFoundation#arduino-foundations)

## Arduino UNO Diagram

[](https://github.com/Archit-Jain-Github/arduinoFoundation#arduino-uno-diagram)

[![Arduino Diagram](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/CN-Arduino-uno-fig1.jpg)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/CN-Arduino-uno-fig1.jpg)

## Breadboard Diagram

[](https://github.com/Archit-Jain-Github/arduinoFoundation#breadboard-diagram)

[![Breadboard Pin](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/Breadboard-Pinout.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/Breadboard-Pinout.png)

## What's Needed

[](https://github.com/Archit-Jain-Github/arduinoFoundation#whats-needed)

-**Hardware:** A circuit board containing a programmable microcontroller with input and output pins

-**Software:** An IDE (Integrated Development Environment) is used to write and upload code to Arduino.

## Arduino Overview

[](https://github.com/Archit-Jain-Github/arduinoFoundation#arduino-overview)

An Arduino is a microcontroller, which is a computer chip with minimal power. It is typically designed for automatic control of external devices. Arduino senses the environment using sensors and provides output through output devices such as LEDs. There are various Arduino boards based on usability, such as UNO, Mega, or Nano (UNO is the most common).

## Components

[](https://github.com/Archit-Jain-Github/arduinoFoundation#components)

-**USB Port:** Connects to a computer, powers the board, and uploads sketches.

-**Power Connector:** Powers the board when not connected to USB (generally between 9 - 15 volts).

-**Reset Button:** Resets to default states.

-**Digital Pins:** 14 digital input and output, 6 with modulation marked with ~.

-**Analog Pins:** 6 analog interfaces, starting with A.

-**Green LED:** Useful for debugging (marked ON), also indicates that Arduino is powered.

-**Yellow LED:** Indicates sending and receiving data between Arduino and computer (marked tx and rx) and during serial communication.

-**Yellow LED marked L:** Connected with pin 13.

-**Atmel ATmega:** AVR family of microcontroller chips (brain of Arduino).

## Digital Pins

[](https://github.com/Archit-Jain-Github/arduinoFoundation#digital-pins)

Values: 0 or 1 (either 0 or 1).

## Digital Values

[](https://github.com/Archit-Jain-Github/arduinoFoundation#digital-values)

[![Digital Values](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/digital-values.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/digital-values.png)

Example: LED (the light is either on or off).

**NOTE:** Pin 0 and 1 are communication pins too (marked Tx and Rx).

**Digital Pins on Arduino can be used as either input or output.**

## Analog Signal

[](https://github.com/Archit-Jain-Github/arduinoFoundation#analog-signal)

[![Analog Signal](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/analog.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/analog.png)

Have a continuous range of values, not on or off, with values in between, for example, a temperature sensor. For UNO, A0 to A5 are analog pins.

## ADC (Analog to Digital Converter)

[](https://github.com/Archit-Jain-Github/arduinoFoundation#adc-analog-to-digital-converter)

ADC (Analog to Digital Converter) translates an analog signal into a digital value that can be understood by the Arduino's microcontroller. The Arduino software reads the digital value produced by the ADC to determine the original value of the analog signal. Most Arduino boards use 10-bit ADC resolution.

[![10 Bit ADC](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/10bitADC.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/10bitADC.png)

Returns an integer value between 0 to 1023, where 0 represents input for 0 volts and 1023 represents input for 5 volts.

## DAC (Digital to Analog Converter)

[](https://github.com/Archit-Jain-Github/arduinoFoundation#dac-digital-to-analog-converter)

Translates a digital value into an analog signal used to provide power to analog circuits.

## Power Pins

[](https://github.com/Archit-Jain-Github/arduinoFoundation#power-pins)

Usually located on the left side of the Arduino board:

-**Voltage In:** Labeled Vin or 9V, used when powering Arduino via an external power adapter (as opposed to 5V USB).

-**5V:** Provides regulated 5V.

-**3.3V:** Provides 3 volts.

-**Ground:** Provides common ground to Arduino.

## Arduino IDE

[](https://github.com/Archit-Jain-Github/arduinoFoundation#arduino-ide)

Used for uploading code to Arduino. It uses a graphical text editor for writing and editing code. Programs written using Arduino IDE are called sketches.

## Default Code

[](https://github.com/Archit-Jain-Github/arduinoFoundation#default-code)

-`void setup()`: Initializes the input and output pins.

-`void loop()`: Repeats the function until the Arduino is powered off.

These functions are essential when working on Arduino.

## Basic Commands

[](https://github.com/Archit-Jain-Github/arduinoFoundation#basic-commands)

-`pinMode(pin, mode)`: Configures the pin (input or output). Example: `pinMode(2, OUTPUT)`.

### Interface Modes

[](https://github.com/Archit-Jain-Github/arduinoFoundation#interface-modes)

1.`INPUT`: Normal input mode to receive a voltage.

2.`INPUT_PULLUP`: Input mode that utilizes the Arduino's internal pull-up resistor.

3.`OUTPUT`: Normal output mode to send a voltage.

-`digitalWrite(pin, value)`: Configures the pin (HIGH or LOW). Example: `digitalWrite(2, HIGH)`.

-`delay(value)`: Adds a delay in milliseconds before going to the next line of code.

## Basic Program to Blink LED

[](https://github.com/Archit-Jain-Github/arduinoFoundation#basic-program-to-blink-led)

```c
int LED = 13;


voidsetup () {

pinMode(LED, OUTPUT);

}


voidloop () {

digitalWrite(LED, HIGH);

delay(1000);

digitalWrite(LED, LOW);

delay(1000);

}
```

## Serial Monitor

[](https://github.com/Archit-Jain-Github/arduinoFoundation#serial-monitor)

Built-in Arduino IDE feature helpful for troubleshooting and serial communication.

## Serial Communication

[](https://github.com/Archit-Jain-Github/arduinoFoundation#serial-communication)

* Digital Pin 0 (RX)
* Digital Pin 1 (TX)

## `Serial.begin()`

[](https://github.com/Archit-Jain-Github/arduinoFoundation#serialbegin)

`Serial.begin()` function initializes serial communication between the Arduino board and an external device, typically a computer.

### Serial Communication

[](https://github.com/Archit-Jain-Github/arduinoFoundation#serial-communication-1)

It is a way for different electronic devices to exchange information over a wireless connection, commonly used for debugging or sending data to a computer.

### `Serial.begin(baudRate)`

[](https://github.com/Archit-Jain-Github/arduinoFoundation#serialbeginbaudrate)

-`Serial`: Refers to the serial communication object in the Arduino programming environment.

-`begin(baudRate)`: Initializes the serial communication. The `baudRate` parameter defines the speed at which data is sent between the Arduino and the connected device.

### Example

[](https://github.com/Archit-Jain-Github/arduinoFoundation#example)

```c
voidsetup() {

  Serial.begin(9600); // Initialize serial communication at 9600 baud

// 9600 is the most common one

}


voidloop() {

// Your main code goes here

}
```

### Purpose

[](https://github.com/Archit-Jain-Github/arduinoFoundation#purpose)

1. **Debugging:** `Serial.begin()` is often used for debugging. `Serial.println()` prints messages or variable values to the Serial Monitor, allowing monitoring of the Arduino program's behavior.

2.**Data Transfer:** If Arduino needs to communicate with another device, serial communication is a straightforward way to exchange data.

Remember to have a matching baud rate in the Arduino code and the Serial Monitor settings for proper communication.

## Using Serial Monitor with Blink LED

[](https://github.com/Archit-Jain-Github/arduinoFoundation#using-serial-monitor-with-blink-led)

```c
int LED =13;

int counter =0;


voidsetup() {

pinMode(LED, OUTPUT);

    Serial.begin(9600);

}


voidloop() {

    counter = counter +1;

    Serial.print("Blink Number # ");

    Serial.println(counter);

digitalWrite(LED, HIGH);

delay(1000);

digitalWrite(LED, LOW);

delay(1000);

}
```

## LED (Light Emitting Diode)

[](https://github.com/Archit-Jain-Github/arduinoFoundation#led-light-emitting-diode)

* Diode that emits light.

 **Diode** : Electrical component that allows current to flow only in one direction.

 **LED** : Has polarity and only lights up if connected properly.

[![LED Schematic Symbol](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/led-diagram.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/led-diagram.png)

* Anode -> Positive -> Longer leg
* Cathode -> Negative -> Shorter leg (Case is flat on cathode side)

### Current Limiting Resistor

[](https://github.com/Archit-Jain-Github/arduinoFoundation#current-limiting-resistor)

Used in a circuit to ensure that a maximum current is not exceeded.

[![Current Limiting Resistor](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/CLR.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/CLR.png)

## Ohm's Law

[](https://github.com/Archit-Jain-Github/arduinoFoundation#ohms-law)

States that the electric current through a conductor between two points is directly proportional to the voltage across the two points. It is described by the equation:

[![Ohm's Law Equation](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/ohmslaw.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/ohmslaw.png)

where I is the current, V is

the voltage, and R is the resistance.

## Push Button

[](https://github.com/Archit-Jain-Github/arduinoFoundation#push-button)

* Electrical component that connects two points in a circuit when pressed.

[![Push Button](https://github.com/Archit-Jain-Github/arduinoFoundation/raw/main/assets/push_button.png)](https://github.com/Archit-Jain-Github/arduinoFoundation/blob/main/assets/push_button.png)

* Current can only flow through this circuit when the button is pressed, connecting the circuit.
* Active-low and active-high refer to the state of a signal or the behavior of a component with respect to its logical levels.

### Active-Low Push Button

[](https://github.com/Archit-Jain-Github/arduinoFoundation#active-low-push-button)

* Pressed when the signal is at a logic low level (typically 0 volts).
* Signal is at a logic high level when the button is not pressed.

### Active-High Push Button

[](https://github.com/Archit-Jain-Github/arduinoFoundation#active-high-push-button)

* Pressed when the signal is at a logic high level (typically equal to the power supply voltage).
* Signal is at a logic low level when the button is not pressed.

---

**To go deeper into Arduino, Explore the official site: [Click Here](https://docs.arduino.cc/learn/)**
