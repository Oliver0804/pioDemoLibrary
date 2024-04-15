// DemoLibrary.cpp

#include "Arduino.h"
#include "DemoLibrary.h"

DemoLibrary::DemoLibrary(int ledPin, int baudrate) {
  pinMode(ledPin, OUTPUT);
  _ledPin = ledPin;
  Serial.begin(baudrate); // 初始化串口
}

void DemoLibrary::ledblinky(int interval) {
  digitalWrite(_ledPin, HIGH);
  delay(interval);
  digitalWrite(_ledPin, LOW);
  delay(interval);
}

void DemoLibrary::helloworld() {
  Serial.println("Hello World");
}

