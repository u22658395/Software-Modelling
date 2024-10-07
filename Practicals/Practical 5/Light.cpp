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

<<<<<<< HEAD
void Light::update()
{
    turnOn();
}

=======
void Light::performAction(bool state){
    on = state;
}
>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
