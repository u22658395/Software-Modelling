#ifndef LOCKALL_H
#define LOCKALL_H
#include "Command.h"

class LockAll: public Command
{
private:
    /* data */
public:
    LockAll(/* args */);
    ~LockAll();
    void execute();
};



#endif