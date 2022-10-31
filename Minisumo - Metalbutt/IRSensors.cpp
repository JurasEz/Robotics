#include "IRSensors.h"

void IRSensor::checkMood() {
  mood = digitalRead(pin);
}

void IRSensor::setPin(const uint8_t pin) {
  this->pin = pin;

  pinMode(pin, INPUT);
}

void IRSensors::checkMoods() {
  left.checkMood();
  middle.checkMood();
  right.checkMood();
}
