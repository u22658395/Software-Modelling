#include "TurnOffAllLights.h"


TurnOffAllLights::TurnOffAllLights(vector<Light> lights){
    this->lights = lights;
}

void TurnOffAllLights::addLight(Light l)
{
    lights.push_back(l);
}

void TurnOffAllLights::execute(){
    for (vector<Light>::iterator it = lights.begin(); it != lights.end(); ++it){
        it->performAction(false);
    }
}

