#ifndef COMMAND_H
#define COMMAND_H
#include "Device.h"

class Command
{
    private:
        Device* device; //this is the receiver
    public:
        Command();
        Command(Device* d);
        virtual ~Command();
        virtual void execute()=0;
};
#endif
