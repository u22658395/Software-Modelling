#include "Lock.h"

DoorLock::DoorLock() : Device("Lock", false)
{
}

DoorLock::DoorLock(bool state) : Device("Lock", state)
{
}

DoorLock::~DoorLock()
{
}

string DoorLock::getStatus()
{
    if (on)
    {
        return "on";
    }

    return "off";
}

void DoorLock::turnOn()
{
    on = true;
}

void DoorLock::turnOff()
{
    on = true;
}

void DoorLock::toggleState()
{
    on = !on;
}

void DoorLock::lock()
{
    this->locked = true;
}

void DoorLock::unlock()
{
    this->locked = false;
}

void DoorLock::toggleLock()
{
    locked = !locked;
}

string DoorLock::getDeviceType()
{
    return type;
}
