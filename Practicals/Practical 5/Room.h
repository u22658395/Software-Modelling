#ifndef ROOM_H
#define ROOM_H
#include "Command.h"
#include "vector"

//this is the Invoker in the Command pattern
class Room : public Device
{
    private:
        /* data */
        Command* lightCommand;
        Command* thermostatCommand;
        vector<Device> devices;
        bool on;

    public:
        Room(/* args */);
        ~Room();        
        void setLightCommand(Command* command);        
        void setThermostatCommand(Command* command);
        void executeThermostatCommand();        
        void executeLightCommand();
        virtual string getStatus();
        virtual void toggleState();
        virtual void performAction(bool state);
};
#endif
