#ifndef SETTHERMOTEMPERATURE_H
#define SETTHERMOTEMPERATURE_H
#include "Command.h"
#include "ThermoIntegrator.h"

class SetThermoTemperature : public Command
{
private:
    ThermoIntegrator *thermostat; // this is the receiver
public:
    SetThermoTemperature(ThermoIntegrator *t);
    virtual void execute();
};
#endif
