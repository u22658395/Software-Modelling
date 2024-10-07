#include "Room.h"

Room::Room(/* args */){
    lightCommand = NULL;
    thermostatCommand = NULL;
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