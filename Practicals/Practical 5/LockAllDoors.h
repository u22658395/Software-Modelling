#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H
#include "Command.h"
#include "DoorLock.h"
#include "vector"

class LockAllDoors : public Command
{
private:
    vector<Device*> locks; // an array of locks whose locks will be turned locked
public:
    LockAllDoors(vector<Device*> Locks); //
    void addLock(DoorLock* l);             // used to add a Lock to the vector
    virtual void execute();
    ~LockAllDoors();
};
#endif
