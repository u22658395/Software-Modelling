#ifndef ROOM_H
#define ROOM_H
#include "Command.h"
#include "vector"
#include "Device.h"

// this is the Invoker in the Command pattern
class Room : public Device
{
private:
    /* data */
    Command *lightCommand;
    Command *thermostatCommand;
    vector<Device *> devices;
    bool on;

public:
    Room();
    Room(string n);
    ~Room();
    void setLightCommand(Command *command);
    void setThermostatCommand(Command *command);
    void executeThermostatCommand();
    void executeLightCommand();
    virtual string getStatus();
    virtual void toggleState();
    virtual void performAction(bool state);
    void addDevice(Device *d);
    void update();
    vector<Device*> getAllDoorLocks();
};
#endif
