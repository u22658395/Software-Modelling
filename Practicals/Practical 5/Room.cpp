#include "Room.h"

Room::Room(string type):Device(type){
    lightCommand = NULL;
    thermostatCommand = NULL;
    on = false;
}

Room::~Room(){
    delete this->lightCommand;
    delete this->thermostatCommand;
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
    if(thermostatCommand != NULL)
        thermostatCommand->execute();
}

void Room::executeLightCommand()
{
    if(lightCommand != NULL)
        lightCommand->execute();
}

string Room::getStatus(){
    string statusStr= getDeviceType()+" - ";

    for(Device* device: devices)
    {
        
        statusStr += device->getStatus() +"\n";
    }

    return statusStr;
}

void Room::toggleState(){
    on = !on;
}

void Room::performAction(bool state){
    on = state;
}

void Room::addDevice(Device *d){
    devices.push_back(d);
}