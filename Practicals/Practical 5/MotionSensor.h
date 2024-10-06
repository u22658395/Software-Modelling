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
    void addDevice(Observer* device);
    void removeDevice(Observer* device);
    void notifyDevices(Observer* device);
    void detectMotion();
};
#endif
