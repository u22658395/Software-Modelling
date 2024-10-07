#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "Device.h"

class Thermostat : public Device
{
<<<<<<< HEAD
    protected:
        float temp;
=======
    private:
        /* data */
        bool on;
>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
    public:
        Thermostat();
        Thermostat(bool state);
        virtual ~Thermostat();
        virtual string getStatus();
        virtual void toggleState();
        virtual string getDeviceType();
<<<<<<< HEAD
        virtual void turnOn();
        virtual void turnOff();
        void update();
        void setTemp(float t);
        void increase();
        void decrease();



=======
        virtual void performAction(bool state);
>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
};
#endif
