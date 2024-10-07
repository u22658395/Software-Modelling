#include "LockAllDoors.h"

LockAllDoors::LockAllDoors(vector<DoorLock> locks)
{
    this->locks = locks;
}

void LockAllDoors::addLock(DoorLock l)
{
    locks.push_back(l);
}

void LockAllDoors::execute()
{
    for (vector<DoorLock>::iterator it = locks.begin(); it != locks.end(); ++it)
    {
        it->performAction(true);
    }
}
