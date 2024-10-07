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
<<<<<<< HEAD
        virtual void turnOn();
        virtual void turnOff();
        void update();
=======
        virtual void performAction(bool state);
>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
};
#endif
