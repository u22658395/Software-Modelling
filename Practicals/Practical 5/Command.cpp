#include "Command.h"

Command::Command(){
    this->device = NULL;
}

Command::Command(Device* d){
    if(d!=NULL){
        this->device= d;
    }
}

Command::~Command(){
    delete this->device;
}
