#ifndef SENSOR_H
#define SENSOR
#include <vector>
#include "Device.h"

class Sensor {

protected:
    std:: vector<Device*> devices;
public:
    virtual void addDevice(Device* device) = 0;
    virtual void removeDevice(Device* device) = 0;
    virtual void notifyDevices(const std::string& event) = 0;
    virtual ~Sensor() {}
};

#endif;