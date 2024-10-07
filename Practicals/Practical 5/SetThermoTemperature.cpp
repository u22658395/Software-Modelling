#include "SetThermoTemperature.h"

SetThermoTemperature::SetThermoTemperature(ThermoIntegrator* t)
{
    if (d != NULL)
    {
        this->thermostat = d;
    }
}

void SetThermoTemperature::execute()
{
    this->thermostat->setTemp(20);
}