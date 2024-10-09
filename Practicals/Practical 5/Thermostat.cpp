#include "Thermostat.h"

Thermostat::Thermostat()
{
    on = false;
    type = "Light";
    name = "";
    temp=20;
}

Thermostat::Thermostat(string name)
{
    on = false;
    type = "Light";
    this->name = name;
    temp=20;
}

Thermostat::Thermostat(bool state, string name)
{
    on = state;
    type = "Light";
    this->name = name;
    temp=20;
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
