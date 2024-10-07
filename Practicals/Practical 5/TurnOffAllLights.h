#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H
#include "Command.h"

class TurnOffAllLights: public Command
{
private:
    /* data */
public:
    TurnOffAllLights(/* args */);
    ~TurnOffAllLights();
    void execute();
};



#endif