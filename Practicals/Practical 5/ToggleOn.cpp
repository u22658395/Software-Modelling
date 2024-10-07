#include "ToggleOn.h"

ToggleOn::ToggleOn(Device* d){
    if(d!=NULL){
        this->device= d;
    }
}

void ToggleOn::execute(){
    this->device->performAction(true);
}