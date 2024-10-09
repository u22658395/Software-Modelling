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
        Light(string name);
        Light(bool state, string name);
        virtual ~Light();
        virtual string getStatus();
        virtual void toggleState();
        virtual string getDeviceType();
        void update();
        virtual void performAction(bool state);
};
#endif
