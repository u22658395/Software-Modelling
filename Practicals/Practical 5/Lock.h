#ifndef LOCK_H
#define LOCK_H
#include "Device.h"

class Lock : public Device
{
    private:
        /* data */
        bool locked;
    public:
        Lock();
        Lock(bool state);
        virtual ~Lock();
        virtual string getStatus();
        virtual void toggleState();
        virtual string getDeviceType();
        virtual void turnOn();
        virtual void turnOff();
        void lock();
        void unlock();
        void toggleLock();
};
#endif
