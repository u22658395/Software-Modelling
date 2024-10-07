#include "Thermostat.h"

Thermostat::Thermostat() : Device("Thermostat")
{
    on = false;
}

Thermostat::Thermostat(bool state) : Device("Thermostat")
{
    on = state;
}

Thermostat::~Thermostat()
{
}

string Thermostat::getStatus(){
    if(on){
        return "On";
    }
    return "Off";
}

void Thermostat::toggleState(){
    on = !on;
}

string Thermostat::getDeviceType(){
    return type;
}

void Thermostat::update()
{
    setTemp(0);
}

void Thermostat::setTemp(float t)
{
    temp=t;
}
void Thermostat::increase()
{
    temp++;
}
void Thermostat::decrease()
{
    temp--;
}
void Thermostat::performAction(bool state)
{
    on = state;
}
