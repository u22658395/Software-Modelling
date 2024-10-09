#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "Device.h"

class Thermostat : public Device
{
    protected:
        float temp;
        bool on;
    public:
        Thermostat();
        Thermostat(string name);
        Thermostat(bool state, string name);
        virtual ~Thermostat();
        virtual string getStatus();
        virtual void toggleState();
        virtual string getDeviceType();
        void update();
        void setTemp(float t);
        void increase();
        void decrease();
        // virtual string getStatus();

        virtual void performAction(bool state);
        float getTemp(){return temp;}
};
#endif
