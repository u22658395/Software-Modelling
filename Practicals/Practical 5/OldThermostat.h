#ifndef OLDTHERMOSTAT_H
#define OLDTHERMOSTAT_H
#include "OldDevice.h"

class OldThermostat : public OldDevice
{
protected:
    int temp;
public:
    OldThermostat(/* args */);
    ~OldThermostat();
    void setTemp(int temp);
    int getTemp();
};

#endif
