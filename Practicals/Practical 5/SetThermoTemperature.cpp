#include "SetThermoTemperature.h"

SetThermoTemperature::SetThermoTemperature(Thermostat*d)
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