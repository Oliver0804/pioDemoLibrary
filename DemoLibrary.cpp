// DemoLibrary.cpp

#include "Arduino.h"
#include "DemoLibrary.h"

DemoLibrary::DemoLibrary()
{
}
// 初始化
void DemoLibrary::init(int ledPin, int baudrate)
{
  pinMode(ledPin, OUTPUT);
  _ledPin = ledPin;
  Serial.begin(baudrate); // 初始化串口
}

void DemoLibrary::ledblinky(int interval)
{
  digitalWrite(_ledPin, HIGH);
  delay(interval);
  digitalWrite(_ledPin, LOW);
  delay(interval);
}

void DemoLibrary::helloworld()
{
  Serial.println("Hello World");
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
