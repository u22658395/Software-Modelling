#include "Sensor.h"

Sensor::~Sensor(){
    for (Device *device : devices)
    {
        delete device;
    }
    devices.clear();
}