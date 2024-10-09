#ifndef TOGGLEON_H
#define TOGGLEON_H
#include "Command.h"

class ToggleOn :public Command
{
    private:
        Device* device; //this is the receiver
    public:
        ToggleOn(Device* d);
        virtual void execute();
        ~ToggleOn() {}
};
#endif
