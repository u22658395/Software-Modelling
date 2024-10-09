#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensor.h"
class MotionSensor: public Sensor
{
    private:
        /* data */
    public:
        virtual void addDevice(Device* device);
        virtual void removeDevice(Device* device);
        virtual void notifyDevices(string event);
        void detectMotion();
        ~MotionSensor();
};
#endif
