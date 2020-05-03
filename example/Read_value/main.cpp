#include <Arduino.h>
#include "optocoupler.hpp"

Optocoupler opto(35);

void setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Optocoupler on pin ");
  Serial.print(opto.pinNumber());
  Serial.print(" state -> ");
  Serial.println(opto.state());

  delay(500);
}