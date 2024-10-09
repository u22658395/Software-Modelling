#include "UnlockAllDoors.h"

UnlockAllDoors::UnlockAllDoors()
{
}

UnlockAllDoors::UnlockAllDoors(vector<Device *> locks)
{
    this->locks = locks;
}

void UnlockAllDoors::addLock(DoorLock *l)
{
    locks.push_back(l);
}

void UnlockAllDoors::execute()
{
    for (Device *lock : locks)
    {
        if(lock != NULL){
            lock->performAction(false);
        }
    }
}
UnlockAllDoors::~UnlockAllDoors()
{
    // for (Device *lock : locks)
    // {
    //     delete lock;
    // }
    locks.clear();
}
