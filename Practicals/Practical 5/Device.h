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
        Command toggleOn;
        Command toggleOff;
        Command toggle;

    public:
        Device(string deviceType);
        virtual ~Device();
        virtual string getStatus()=0;
        virtual void performAction()=0;
        string getDeviceType();

};
#endif
