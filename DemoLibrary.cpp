// DemoLibrary.cpp
#if ARDUINO >= 100
#include "Arduino.h"
#endif
#include "DemoLibrary.h"

DemoLibrary::DemoLibrary()
{
}
// 初始化
void DemoLibrary::init(int ledPin, int baudrate)
{
#if ARDUINO >= 100

  pinMode(ledPin, OUTPUT);
  _ledPin = ledPin;
  Serial.begin(baudrate); // 初始化串口
#endif
}

void DemoLibrary::ledblinky(int interval)
{
#if ARDUINO >= 100

  digitalWrite(_ledPin, HIGH);
  delay(interval);
  digitalWrite(_ledPin, LOW);
  delay(interval);
#endif
}

void DemoLibrary::helloworld()
{
#if ARDUINO >= 100

  Serial.println("Hello World");
#endif
}

// add two int
int DemoLibrary::add(int a, int b)
{
  return a + b;
}
// subtract two int
int DemoLibrary::sub(int a, int b)
{
  if (a < b)
  {
    return b - a;
  }
  return a - b;
}

// find min from two int
int DemoLibrary::min(int a, int b)
{
  return a < b ? a : b;
}

// find max from two int
int DemoLibrary::max(int a, int b)
{
  return a > b ? a : b;
}
