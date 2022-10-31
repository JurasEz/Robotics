#include "LineSensors.h"

void LineSensor::setPin(const uint8_t pin) {
  this->pin = pin;
  
  pinMode(pin, INPUT_PULLUP);
}

bool LineSensor::checkMood() {
  return analogRead(pin) < 200 ? 1 : 0;
}
