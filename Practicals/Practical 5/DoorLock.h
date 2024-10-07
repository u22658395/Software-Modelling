#ifndef LOCK_H
#define LOCK_H
#include "Device.h"

class DoorLock : public Device
{
private:
    /* data */
    bool locked;

public:
    DoorLock();
    DoorLock(bool state);
    virtual ~DoorLock();
    virtual string getStatus();
    virtual void toggleState();
    virtual string getDeviceType();
    void toggleLock();
    virtual void performAction(bool state);
};
#endif
