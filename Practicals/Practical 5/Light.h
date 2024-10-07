#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"

class Light : public Device
{
    private:
        /* data */
        bool on;
    public:
        Light();
        Light(bool state);
        virtual ~Light();
        virtual string getStatus();
        virtual void toggleState();
        virtual string getDeviceType();
        virtual void turnOn();
        virtual void turnOff();
        void update();
        virtual void performAction(bool state);
};
#endif
