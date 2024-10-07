#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "Device.h"

class Thermostat : public Device
{
    protected:
        float temp;
    public:
        Thermostat();
        Thermostat(bool state);
        virtual ~Thermostat();
        virtual string getStatus();
        virtual void toggleState();
        virtual string getDeviceType();
        virtual void turnOn();
        virtual void turnOff();
        void update();
        void setTemp(float t);
        void increase();
        void decrease();



};
#endif
