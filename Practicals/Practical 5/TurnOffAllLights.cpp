#include "TurnOffAllLights.h"

<<<<<<< HEAD
void TurnOffAllLights:: execute()
{
    
}
=======

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

>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
