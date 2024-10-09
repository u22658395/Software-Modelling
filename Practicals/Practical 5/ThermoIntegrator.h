#ifndef THERMOIntegrator_H
#define THERMOIntegrator_H
#include "Thermostat.h"
#include "OldThermostat.h"

class ThermoIntegrator: public Thermostat//inherit from smart devices
{
protected:
    OldThermostat* thermo;
public:
    ThermoIntegrator(OldThermostat* t);
    ~ThermoIntegrator();
    void update();
    // string getStatus();
    // std:: string getDeviceType();
    void setTemp(float t);

    void increase();

    void decrease();

};  
#endif
