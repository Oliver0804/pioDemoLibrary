
#ifndef DemoLibrary_h
#define DemoLibrary_h

#include "Arduino.h"

class DemoLibrary {
  public:
    DemoLibrary(int ledPin, int baudrate);
    void ledblinky(int interval);
    void helloworld();
  private:
    int _ledPin;
};

#endif
