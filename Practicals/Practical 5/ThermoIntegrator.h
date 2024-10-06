#ifndef THERMOIntegrator_H
#define THERMOIntegrator_H
#include "Integrator.h"
#include "OldThermostat.h"

class ThermoIntegrator: public Integrator//inherit from smart devices
{
protected:
    OldThermostat* thermo;
public:
    ThermoIntegrator(OldThermostat* t);
    ~ThermoIntegrator();
    void performAction();/////fix this later
};
#endif
