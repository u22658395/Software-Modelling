#include "OldThermostat.h"

OldThermostat:: OldThermostat(/* args */)
{
    temp= 20;
}
OldThermostat:: ~OldThermostat()
{

}
void OldThermostat:: setTemp(int temp)
{
    this->temp=temp;
}
int OldThermostat ::getTemp()
{
    return temp;
}