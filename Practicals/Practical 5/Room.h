#ifndef ROOM_H
#define ROOM_H
#include "Command.h"

//this is the Invoker in the Command pattern
class Room
{
    private:
        /* data */
        Command* lightCommand;
        Command* thermostatCommand;

    public:
        Room(/* args */);
        ~Room();        
        void setLightCommand(Command* command);        
        void setThermostatCommand(Command* command);
        void executeThermostatCommand();        
        void executeLightCommand();


};
#endif
