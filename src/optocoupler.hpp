# pragma once

#include <Arduino.h>

class Optocoupler
{
    public:
        Optocoupler(int pin);
        bool state();
        int readPin();
        void printState();
    
    private:
        int _pin;
        bool _state;
};