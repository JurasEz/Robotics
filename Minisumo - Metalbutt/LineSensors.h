#ifndef LINE_SENSORS_H
#define LINE_SENSORS_H

#include "Arduino.h"

class LineSensor {
  public:
    void setPin(const uint8_t pin);
    bool checkMood();
  private:
    uint8_t pin;
};

class LineSensors {
  public:
    LineSensor left;
    LineSensor right;
};

#endif
