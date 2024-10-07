#include "Light.h"

Light::Light() : Device("Light")
{
    on = false;
}

Light::Light(bool state) : Device("Light")
{
    on = state;
}

Light::~Light()
{
}

string Light::getStatus(){
    if(on){
        return "On";
    }

    return "Off";
}

void Light::toggleState(){
    on = !on;
}

string Light::getDeviceType(){
    return type;
}

void Light::update()
{
    turnOn();
}

void Light::performAction(bool state){
    on = state;
}
