#include "Light.h"

Light::Light(){
    on = false;
    type = "Light";
    name = "";
}

Light::Light(string name)
{
    on = false;
    type = "Light";
    this->name =name;
}

Light::Light(bool state, string name)
{
    on = state;
    type = "Light";
    this->name = name;
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
    performAction(true);
}

void Light::performAction(bool state){
    on = state;
    if(on=true)
    {
        std::cout <<"\n SWITCHING ON LIGHTS💡💡💡\n";
    }
    else
    {
        std::cout <<"\nSWITCHING OFF LIGHTS\n";
    }
}
