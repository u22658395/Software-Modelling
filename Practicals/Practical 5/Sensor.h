#ifndef SENSOR_H
#define SENSOR
#include <vector>
#include "Observer.h"

class Sensor {

protected:
    std:: vector<Observer> devices;
public:
    virtual void addDevice(std::shared_ptr<Observer> device) = 0;
    virtual void removeDevice(std::shared_ptr<Observer> device) = 0;
    virtual void notifyDevices(const std::string& event) = 0;
    virtual ~Sensor() {}
};

#endif;