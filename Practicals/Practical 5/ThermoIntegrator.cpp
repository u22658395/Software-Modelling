#include "ThermoIntegrator.h"

ThermoIntegrator:: ThermoIntegrator(OldThermostat* t)
{
    thermo=t;
    type= "Thermostat";
    
}
ThermoIntegrator:: ~ThermoIntegrator()
{
    if(thermo!=NULL)
    {
        delete thermo;
        thermo = NULL;
    }
}