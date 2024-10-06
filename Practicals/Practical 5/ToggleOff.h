#ifndef TOGGLEOFF_H
#define TOGGLEOFF_H
#include "Command.h"

class ToggleOff :public Command
{
    private:
        Device* device; //this is the receiver
    public:
        ToggleOff();
        ToggleOff(Device* d);
        virtual ~ToggleOff();
        virtual void execute();
};
#endif
