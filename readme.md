# pioDemoLibrary

## Introduction

`pioDemoLibrary` is a simple library for Arduino and PlatformIO, providing two basic functionalities: LED blinking and printing "Hello World".

## Features

- LED Blinking: By calling the `ledblinky()` function, you can make the LED connected to Arduino blink at a specified interval.
- Printing "Hello World": By calling the `helloworld()` function, you can print the "Hello World" string on the serial monitor.

## Installation

To use `pioDemoLibrary` in your PlatformIO project, simply add the following line to the `lib_deps` section of your `platformio.ini` file:

```
lib_deps =
	https://github.com/Oliver0804/pioDemoLibrary
```
Then run the `pio run` command, and PlatformIO will automatically install and include `pioDemoLibrary`.

## Usage

### LED Blinking

```cpp
#include <DemoLibrary.h>

// Define LED pin
const int ledPin = 13;

// Create DemoLibrary instance
DemoLibrary demo(ledPin,115200);

void setup() {
  // Initialize serial communication
}

void loop() {
  // Call the LED blink functionality, with an interval of 100 milliseconds
  demo.ledblinky(1000);
}
```


### Print "Hello World"
```
#include <DemoLibrary.h>

// Create DemoLibrary instance
DemoLibrary demo(13,115200);

void setup() {
  // Initialize serial communication
}

void loop() {
  // Call the Hello World functionality
  demo.helloworld();
}
```
