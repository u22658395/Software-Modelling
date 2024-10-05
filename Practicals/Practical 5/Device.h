#ifndef DEVICE_H
#define DEVICE_H
#include "Command.h"
#include <iostream>
using namespace std;
class Device
{
    private:
        bool on;
        Command toggleOn;
        Command toggleOff;
        Command toggle;

    public:
        Device(/* args */);
        ~Device();
        string getStatus();
        void performAction();
        string getDeviceType();

};
#endif
