# pragma once

#include <Arduino.h>

class Optocoupler
{
    public:
        Optocoupler(int pin);
        Optocoupler();
        void setPin(int pin);
        bool state();
        int getPin();
        void printState();
    
    private:
        int _pin;
        bool _state;
};
