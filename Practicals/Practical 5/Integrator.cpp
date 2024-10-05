#include "Integrator.h"

Integrator::~Integrator()
{
    if (olddevice!=NULL)
    {
        delete olddevice;
        olddevice =NULL;
    }
}