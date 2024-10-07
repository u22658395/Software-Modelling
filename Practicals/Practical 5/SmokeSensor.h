#ifndef SMOKESENSOR_H
#define SMOKESENSOR_H
#include "Sensor.h"
#include "Device.h"

class SmokeSensor : public Sensor {
public:
    void addDevice(Device* device);
    void removeDevice(Device* device);
    void notifyDevices( std::string event);

    // Simulate smoke detection
    void detectSmoke();

};
#endif