#ifndef DEVICE_H
#define DEVICE_H
#include "Command.h"
#include <iostream>
using namespace std;

class Device
{
    protected:
        string type;
    public:
        // Device();
        Device(string deviceType);
        virtual ~Device();
        virtual string getStatus()=0;
        virtual void toggleState()=0;
        virtual string getDeviceType()=0;
        virtual void turnOn()=0;
        virtual void turnOff()=0;
        virtual void update()= 0;
        string getDeviceType();
        virtual void performAction(bool state)=0;
};
#endif
