#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H
#include "Sensor.h"
class MotionSensor: public Sensor
{
private:
    /* data */
public:
    MotionSensor(/* args */);
    ~MotionSensor();
    void addDevice(Device* device);
    void removeDevice(Device* device);
    void notifyDevices(string event);
    void detectMotion();
};
#endif