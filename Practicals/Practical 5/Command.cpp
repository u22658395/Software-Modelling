#include "Command.h"

Command::Command(){
    
}

Command::Command(Device* d){
    if(d!=NULL){
        this->device= d;
    }
}

Command::~Command(){
    delete this->device;
}
