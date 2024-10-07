#include "LockAllDoors.h"


LockAllDoors::LockAllDoors(vector<Lock> locks){
    this->locks = locks;
}

void LockAllDoors::addLock(Lock l)
{
    locks.push_back(l);
}

void LockAllDoors::execute(){
    for (vector<Lock>::iterator it = locks.begin(); it != locks.end(); ++it){
        it->lock();
    }
}

