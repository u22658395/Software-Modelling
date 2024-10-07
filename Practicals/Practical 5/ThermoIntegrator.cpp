#include "ThermoIntegrator.h"

ThermoIntegrator:: ThermoIntegrator(OldThermostat* t)
{
    thermo=t;
    type= "Thermostat";
    on=false;
    
}
ThermoIntegrator:: ~ThermoIntegrator()
{
    if(thermo!=NULL)
    {
        delete thermo;
        thermo = NULL;
    }
}

void ThermoIntegrator::update()
{
    thermo->setTemp(0);
}

void ThermoIntegrator::setTemp(float t)
{
    thermo->setTemp(t);
}
void ThermoIntegrator::increase()
{
    thermo->setTemp(++temp);
}
void ThermoIntegrator::decrease()
{
    thermo->setTemp(--temp);
}