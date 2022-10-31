#ifndef MOTORS_H
#define MOTORS_H

#include "Arduino.h"

class Motor {
  public:
    void setPins(const uint8_t fwdPin, const uint8_t bwdPin);
    void drive(int16_t motorSpeed);
  private:
    uint8_t fwdPin;
    uint8_t bwdPin;
};

class Motors {
  public:
    Motor left;
    Motor right;
};

#endif
