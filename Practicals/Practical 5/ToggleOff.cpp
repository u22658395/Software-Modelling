#include "ToggleOff.h"

ToggleOff::ToggleOff(){
    this->device = NULL;
}

ToggleOff::ToggleOff(Device* d){
    if(d!=NULL){
        this->device= d;
    }
}

ToggleOff::~ToggleOff(){
    delete this->device;
}

void ToggleOff::execute()
{
    this->device->turnOff();
}