#ifndef DEVICE_H
#define DEVICE_H
#include "Command.h"
#include <iostream>
using namespace std;
class Device
{
    private:
        string type;
        bool on;
        Command* toggleOn;
        Command* toggleOff;
        Command* toggle;

    public:
        Device();
        Device(string deviceType, bool state);
        virtual ~Device();
        virtual string getStatus()=0;
        virtual void toggleState()=0;
        virtual string getDeviceType()=0;

};
#endif
