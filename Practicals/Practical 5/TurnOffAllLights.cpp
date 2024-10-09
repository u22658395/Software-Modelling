#include "TurnOffAllLights.h"


TurnOffAllLights::TurnOffAllLights(){
    
}

TurnOffAllLights::TurnOffAllLights(vector<Device *> lights)
{
    this->lights = lights;
}

void TurnOffAllLights::addLight(Light* l)
{
    lights.push_back(l);
}

void TurnOffAllLights::execute(){
    for (Device *light : lights)
    {
        if (light != NULL)
        {
            light->performAction(false);
        }
    }
}

TurnOffAllLights::~TurnOffAllLights()
{

    lights.clear();
}
