#include "ThermoIntegrator.h"

ThermoIntegrator:: ThermoIntegrator(OldThermostat* t)
{
    thermo=t;
}
ThermoIntegrator:: ~ThermoIntegrator()
{
    if(thermo!=NULL)
    {
        delete thermo;
        thermo = NULL;
    }
}