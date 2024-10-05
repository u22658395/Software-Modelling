#ifndef INTERGRATOR_H
#define INTERGRATOR_H
#include "OldDevice.h"
#include <memory>
#include <iostream>
class Integrator //smart device child
{
protected:
    
    OldDevice* olddevice;
public:
    Integrator(/* args */);
    virtual ~Integrator();
};
#endif
