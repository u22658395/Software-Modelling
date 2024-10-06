#ifndef OBSERVER_H
#define OBSERVER_H
// #include "SmartDevice.h"
class Observer
{
protected:
    // SmartDevice* device;
public:
    virtual void update(std::string& event) = 0;
    virtual ~Observer();
};

#endif