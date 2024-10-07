#ifndef UNLOCKALLDOORS_H
#define UNLOCKALLDOORS_H
#include "Command.h"
#include "DoorLock.h"
#include "vector"

class UnlockAllDoors : public Command
{
private:
    vector<DoorLock> locks; // an array of locks whose locks will be turned locked
public:
    UnlockAllDoors(vector<DoorLock> Locks); //
    void addLock(DoorLock l);               // used to add a Lock to the vector
    virtual void execute();
};
#endif
