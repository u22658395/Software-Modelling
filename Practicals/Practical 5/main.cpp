#include "Command.h"
#include "Device.h"
#include "DoorLock.h"
#include "Light.h"
#include "LockAllDoors.h"
#include "MacroRoutine.h"
#include "Room.h"
// #include "SetThermoTemperature.h"
#include "Thermostat.h"
#include "ToggleOff.h"
#include "ToggleOn.h"
#include "TurnOffAllLights.h"
#include "UnlockAllDoors.h"

int main(int argc, char const *argv[])
{
    Room* house = new Room("4-Room House");

    Room* bedroom = new Room("Main Bedroom");    
    Room* kitchen = new Room("Kitchen");
    Room* lounge = new Room("Lounge");
    Room* bathroom = new Room("Bathroom");

    house->addDevice(bedroom);
    house->addDevice(kitchen);
    house->addDevice(lounge);
    house->addDevice(bathroom);

    cout << house->getStatus() << endl;

    bedroom->addDevice(new Light());
    kitchen->addDevice(new Light());
    lounge->addDevice(new Light());
    bathroom->addDevice(new Light());

    cout << house->getStatus() << endl;

    // bedroom->setLightCommand();

    return 0;
}
