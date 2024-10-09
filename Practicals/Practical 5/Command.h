#ifndef COMMAND_H
#define COMMAND_H
#include "Device.h"

class Command
{
    public:
        virtual void execute()=0;
        //virtual ~Command(){}
};
#endif
