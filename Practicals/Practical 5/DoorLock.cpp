#include "DoorLock.h"

DoorLock::DoorLock()
{
    locked = false;
    type= "Lock";
    name="";
}

DoorLock::DoorLock(string name)
{
    locked = false;
    type="Lock";
    this->name=name;
}

DoorLock::DoorLock(bool state, string name)
{
    locked = state;
    type = "Lock";
    this->name = name;
}

DoorLock::~DoorLock()
{
}

string DoorLock::getStatus()
{
    if (locked)
    {
        return "Locked";
    }

    return "Unlocked";
}


void DoorLock::toggleState()
{
    locked = !locked;
}

void DoorLock::performAction(bool state){
    locked = state;
    if(locked=true)
    {
        std::cout <<"\n LOCKING DOORS🚪🚪🚪\n";
    }
    else
    {
        std::cout <<"\nUNLOCKING DOORS\n";
    }
}

void DoorLock::toggleLock()
{
    locked = !locked;
}

string DoorLock::getDeviceType()
{
    return type;
}

void DoorLock::update()
{
    performAction(false);
}
