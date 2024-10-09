#ifndef OLDTHERMOSTAT_H
#define OLDTHERMOSTAT_H

class OldThermostat
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
