#include "ToggleOn.h"

ToggleOn::ToggleOn(){
    this->device = NULL;
}

ToggleOn::ToggleOn(Device* d){
    if(d!=NULL){
        this->device= d;
    }
}

ToggleOn::~ToggleOn(){
    delete this->device;
}

void ToggleOn::execute(){
    this->device->turnOn();
}