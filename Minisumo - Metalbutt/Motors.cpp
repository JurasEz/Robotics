#include "Motors.h"

void Motor::setPins(const uint8_t fwdPin, const uint8_t bwdPin) {
  this->fwdPin = fwdPin;
  this->bwdPin = bwdPin;

  pinMode(fwdPin, OUTPUT);
  pinMode(bwdPin, OUTPUT);
}

void Motor::drive(int16_t motorSpeed) {
  if (motorSpeed > 0) {
    digitalWrite(fwdPin, HIGH);
    digitalWrite(bwdPin, LOW);
    analogWrite(fwdPin, motorSpeed);
  } else if (motorSpeed < 0) {
    digitalWrite(fwdPin, LOW);
    digitalWrite(bwdPin, HIGH);
    analogWrite(bwdPin, abs(motorSpeed));
  } else {
    digitalWrite(fwdPin, LOW);
    digitalWrite(bwdPin, LOW);
  }
}
