#include "Optocoupler.hpp"

/**
 * @brief Construct a new Optocoupler:: Optocoupler object
 * 
 * @param pin 
 */
Optocoupler::Optocoupler(int pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}

/**
 * @brief Construct a new Optocoupler:: Optocoupler object
 * 
 */
Optocoupler::Optocoupler()
{

}

/**
 * @brief Set optocoupler pin number
 * 
 * @param pin 
 */
void Optocoupler::setPin(int pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
}


/**
 * @brief Read opto state
 * 
 * @return bool
 */
bool Optocoupler::state()
{
    _state = !digitalRead(_pin);
    return _state;
}

/**
 * @brief Read opto pin
 * 
 * @return int 
 */
int Optocoupler::getPin()
{
    return _pin;
}

/**
 * @brief Print opto state 
 */
void Optocoupler::printState()
{
    state();
    Serial.printf("Op-%d -> %d\n", _pin, _state);
}
