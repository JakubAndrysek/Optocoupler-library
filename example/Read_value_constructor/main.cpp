#include <Arduino.h>
#include "Optocoupler.hpp"

Optocoupler opto(35);

void setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Optocoupler on pin ");
  Serial.print(opto.getPin());
  Serial.print(" state -> ");
  Serial.println(opto.state());

  delay(500);
}
