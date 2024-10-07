#include "UnlockAllDoors.h"

UnlockAllDoors::UnlockAllDoors(vector<DoorLock> locks)
{
    this->locks = locks;
}

void UnlockAllDoors::addLock(DoorLock l)
{
    locks.push_back(l);
}

void UnlockAllDoors::execute()
{
    for (vector<DoorLock>::iterator it = locks.begin(); it != locks.end(); ++it)
    {
        it->performAction(false);
    }
}
