#include "Thermostat.h"

Thermostat::Thermostat() : Device("Thermostat", false)
{
}

Thermostat::Thermostat(bool state) : Device("Thermostat", state)
{
}

Thermostat::~Thermostat()
{
}

string Thermostat::getStatus(){
    if(on){
        return "on";
    }

    return "off";
}

void Thermostat::turnOn(){
    on=true;
}

void Thermostat::turnOff(){
    on=true;
}

void Thermostat::toggleState(){
    on = !on;
}

string Thermostat::getDeviceType(){
    return type;
}