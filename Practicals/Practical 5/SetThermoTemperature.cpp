#include "SetThermoTemperature.h"

SetThermoTemperature::SetThermoTemperature(ThermoIntegrator* d)
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