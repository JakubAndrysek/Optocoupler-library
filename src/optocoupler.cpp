#include "optocoupler.hpp"
#include <Arduino.h>

// Set opto pin
Optocoupler::Optocoupler(int pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}


// Read opto state
bool Optocoupler::state()
{
    _state = !digitalRead(_pin);
    return _state;
}

// Read opto pin
int Optocoupler::pinNumber()
{
    return _pin;
}

// Print opto state
void Optocoupler::printState()
{
    state();
    Serial.printf("Op-%d -> %d\n", _pin, _state);
}