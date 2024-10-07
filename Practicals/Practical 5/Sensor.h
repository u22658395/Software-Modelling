#ifndef SENSOR_H
#define SENSOR
#include <vector>
#include "Observer.h"

class Sensor {

protected:
    std:: vector<Observer*> devices;
public:
    virtual void addDevice(Observer* device) = 0;
    virtual void removeDevice(Observer* device) = 0;
    virtual void notifyDevices(const std::string& event) = 0;
    virtual ~Sensor() {}
};

#endif;