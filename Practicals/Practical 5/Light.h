#ifndef LIGHT_H
#define LIGHT_H
#include "Device.h"

class Light : public Device
{
    private:
        /* data */
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
};
#endif
