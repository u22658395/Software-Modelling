#include "Room.h"


Room::Room()
{
    lightCommand = NULL;
    thermostatCommand = NULL;
    on = false;
    type = "Room";
    this->name = "";
}

Room::Room(string name)
{
    lightCommand = NULL;
    thermostatCommand = NULL;
    on = false;
    type = "Room";
    this->name = name;
}

Room::~Room()
{
    if (lightCommand!=NULL)
    {
        // delete this->lightCommand;
        lightCommand = NULL;
    }
    
    if(thermostatCommand!=NULL)
    {
        // delete this->thermostatCommand;
        thermostatCommand = NULL;
    }
    
    for (Device* device:devices)
    devices.clear();
}

void Room::setLightCommand(Command *command)
{
    this->lightCommand = command;
}

void Room::setThermostatCommand(Command *command)
{
    this->thermostatCommand = command;
}

void Room::executeThermostatCommand()
{
    if (thermostatCommand != NULL)
        thermostatCommand->execute();
}

void Room::executeLightCommand()
{
    if (lightCommand != NULL)
        lightCommand->execute();
}

string Room::getStatus()
{
    string statusStr = name + " - ";

    for (Device *device : devices)
    {

        statusStr += device->getStatus() + "\n";
    }

    return statusStr;
}

void Room::toggleState()
{
    on = !on;
}

void Room::performAction(bool state)
{
    on = state;
}

void Room::addDevice(Device *d)
{
    if (d!= NULL)
        devices.push_back(d);
}

void Room::update()
{
    for (Device *device : devices)
    {

        device->update();
    }
}

vector<Device*> Room::getAllDoorLocks()
{
    vector<Device*> doors;
    for (Device* device:devices)
    {
        if(device != NULL){
            if(device->getDeviceType() =="DoorLock"){
                doors.push_back(device);
            }
            else{
                if(device->getDeviceType() == "Room"){
                    vector<Device*> roomVect = ((Room *)device)->getAllDoorLocks();
                    doors.insert(doors.end(), roomVect.begin(), roomVect.end());
                }
            }
        }
    }

    return doors;
}