#include "LockAllDoors.h"

LockAllDoors::LockAllDoors(vector<Device*> locks)
{
    this->locks = locks;
}

void LockAllDoors::addLock(DoorLock* l)
{
    locks.push_back(l);
}

void LockAllDoors::execute()
{
    for (Device* lock:locks)
    {
        lock->performAction(true);
    }
}
LockAllDoors::~LockAllDoors()
{
    // for (Device *lock : locks)
    // {
    //     delete lock;
    // }
    locks.clear();
}
