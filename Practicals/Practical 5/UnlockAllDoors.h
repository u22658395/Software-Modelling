#ifndef UNLOCKALLDOORS_H
#define UNLOCKALLDOORS_H
#include "Command.h"
#include "DoorLock.h"
#include "vector"

class UnlockAllDoors : public Command
{
private:
    vector<Device*> locks; // an array of locks whose locks will be turned locked
public:
    UnlockAllDoors(); //
    UnlockAllDoors(vector<Device*> locks);
    void addLock(DoorLock *l); // used to add a Lock to the vector
    virtual void execute();
    ~UnlockAllDoors();
};
#endif
