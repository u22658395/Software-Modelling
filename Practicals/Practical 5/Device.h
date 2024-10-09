#ifndef DEVICE_H
#define DEVICE_H
#include "Command.h"
#include <iostream>
using namespace std;

class Device
{
    protected:
        string type;
        string name;
        float temp;
    public:
        // Device(){}
        // Device(string deviceType, string name);
        virtual ~Device();
        virtual string getStatus()=0;
        virtual void toggleState()=0;
        virtual void update()=0;
        string getDeviceType();
        virtual void performAction(bool state)=0;
        virtual float getTemp(){return temp;}
        virtual void increase(){};
        virtual void decrease(){}
};
#endif
