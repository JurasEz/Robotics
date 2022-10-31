#ifndef IR_SENSORS_H
#define IR_SENSORS_H

#include "Arduino.h"

class IRSensor {
  public:
    void setPin(const uint8_t pin);
    void checkMood();
    bool mood;
  private:
    uint8_t pin;
};

class IRSensors {
  public:
    IRSensor left;
    IRSensor middle;
    IRSensor right;
    void checkMoods();
};

#endif
