#include "Lock.h"

Lock::Lock() : Device("Lock", false)
{
}

Lock::Lock(bool state) : Device("Lock", state)
{
}

Lock::~Lock()
{
}

string Lock::getStatus(){
    if(on){
        return "on";
    }

    return "off";
}

void Lock::turnOn(){
    on=true;
}

void Lock::turnOff(){
    on=true;
}

void Lock::toggleState(){
    on = !on;
}

void Lock::lock()
{
    this->locked = true;
}

void Lock::unlock()
{
    this->locked = false;
}

void Lock::toggleLock()
{
    locked = !locked;
}

string Lock::getDeviceType(){
    return type;
}

void Lock::update()
{
    unlock();
}
