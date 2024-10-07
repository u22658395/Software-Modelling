#include "ToggleOff.h"

ToggleOff::ToggleOff(Device* d){
    if(d!=NULL){
        this->device= d;
    }
}

void ToggleOff::execute()
{
    this->device->performAction(false);
}