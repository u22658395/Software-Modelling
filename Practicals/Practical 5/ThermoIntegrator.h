#ifndef THERMOIntegrator_H
#define THERMOIntegrator_H
#include "Device.h"
#include "OldThermostat.h"

class ThermoIntegrator: public Device//inherit from smart devices
{
protected:
    OldThermostat* thermo;
public:
    ThermoIntegrator(OldThermostat* t);
    ~ThermoIntegrator();
    void performAction();/////fix this later
    string getStatus();
    std:: string getDeviceType();
};  
#endif
