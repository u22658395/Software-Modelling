#include "DoorLock.h"

DoorLock::DoorLock() : Device("Lock")
{
    locked = false;
}

DoorLock::DoorLock(bool state) : Device("Lock")
{
    locked = state;
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
}

void DoorLock::toggleLock()
{
    locked = !locked;
}

string DoorLock::getDeviceType()
{
    return type;
}
