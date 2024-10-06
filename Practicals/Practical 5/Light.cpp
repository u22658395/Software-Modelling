#include "Light.h"

Light::Light() : Device("Light", false)
{
}

Light::Light(bool state) : Device("Light", state)
{
}

Light::~Light()
{
}

string Light::getStatus(){
    if(on){
        return "on";
    }

    return "off";
}

void Light::turnOn(){
    on=true;
}

void Light::turnOff(){
    on=true;
}

void Light::toggleState(){
    on = !on;
}

string Light::getDeviceType(){
    return type;
}
