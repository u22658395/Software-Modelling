#ifndef LOCKALLDOORS_H
#define LOCKALLDOORS_H
#include "Command.h"
#include "Lock.h"
#include "vector"

class LockAllDoors : public Command
{
    private:
        vector<Lock> locks; // an array of locks whose locks will be turned locked
    public:
        LockAllDoors(vector<Lock> Locks); //
        void addLock(Lock l); //used to add a Lock to the vector
        virtual void execute();
};
#endif
