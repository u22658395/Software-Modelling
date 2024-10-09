#ifndef TOGGLEOFF_H
#define TOGGLEOFF_H
#include "Command.h"

class ToggleOff :public Command
{
    private:
        Device* device; //this is the receiver
    public:
        ToggleOff(Device* d);
        virtual void execute();
        ~ToggleOff(){}
        
};
#endif
