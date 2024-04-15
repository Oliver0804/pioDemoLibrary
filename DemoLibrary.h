
#ifndef DemoLibrary_h
#define DemoLibrary_h
#if ARDUINO >= 100
#include "Arduino.h"
#endif
class DemoLibrary
{
public:
  DemoLibrary();
  void init(int ledPin, int baudrate);
  void ledblinky(int interval);
  void helloworld();
  int add(int a, int b);
  int sub(int a, int b);
  int max(int a, int b);
  int min(int a, int b);

private:
  int _ledPin;
};

#endif
