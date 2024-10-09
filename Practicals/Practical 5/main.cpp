#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include "DoorLock.h"
#include "Light.h"
#include "Thermostat.h"
#include "LockAllDoors.h"
#include "UnlockAllDoors.h"
#include "TurnOffAllLights.h"
#include "ToggleOn.h"
#include "ToggleOff.h"
#include "MacroRoutine.h"
#include "MotionSensor.h"
#include "SmokeSensor.h"
#include "Room.h"
#include "OldThermostat.h"
#include "ThermoIntegrator.h"

// Function to simulate a delay with a message
void simulateDelay(const std::string &message, int seconds = 2)
{
    std::cout << message << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

// Function to print colored text
void printColored(const std::string &text, const std::string &color = "\033[0m") {
    std::cout << color << text << "\033[0m" << std::endl;
}

int main()
{
    // ===========================
    // 1. Create Devices
    // ===========================
     std::cout<<"\n\n\n";
    printColored("🌟 Welcome to the Smart Home Simulator! 🌟", "\033[1;32m");
    std::cout<<"\n\n";

    Device *frontDoorLock = new DoorLock();                      // Initially unlocked
    Device *backDoorLock = new DoorLock(true, "Back Door Lock"); // Initially locked

    Device *livingRoomLight = new Light();                   // Initially off
    Device *kitchenLight = new Light(true, "Kitchen Light"); // Initially on

    Device *mainThermostat = new Thermostat();                          // Initially off, temp = 20°C
    Device *guestThermostat = new Thermostat(true, "Guest Thermostat"); // Initially on, temp = 20°C

    // Legacy Thermostat
    OldThermostat *oldThermo = new OldThermostat();
    std::cout<<"Temperature:  " <<oldThermo->getTemp()<< std::endl;
    oldThermo->setTemp(26);
    std::cout<<"\n New Temperature:  " <<oldThermo->getTemp()<< "\n";

    Device *oldThermoAdapter = new ThermoIntegrator(oldThermo); // Adapter Pattern

    // ===========================
    // 2. Create Commands
    // ===========================
    Command *toggleLivingRoomLightOn = new ToggleOn(livingRoomLight);
    Command *toggleLivingRoomLightOff = new ToggleOff(livingRoomLight);

    Command *toggleKitchenLightOn = new ToggleOn(kitchenLight);
    Command *toggleKitchenLightOff = new ToggleOff(kitchenLight);

    std::vector<Device *> locks = {frontDoorLock, backDoorLock};
    LockAllDoors lockAllDoors(locks);
    UnlockAllDoors unlockAllDoors(locks);

    TurnOffAllLights turnOffAllLights({livingRoomLight, kitchenLight});

    // ===========================
    // 3. Create Macro Routine
    // ===========================
    MacroRoutine *eveningRoutine = new MacroRoutine();
    eveningRoutine->addProcedure("🔐 Lock All Doors", &lockAllDoors);
    eveningRoutine->addProcedure("💡 Turn Off All Lights", &turnOffAllLights);

    // ===========================
    // 4. Create Rooms and Assign Commands
    // ===========================
    Room *livingRoom = new Room("🛋️ Living Room");
    livingRoom->setLightCommand(toggleLivingRoomLightOn);
    livingRoom->setThermostatCommand(toggleKitchenLightOn); // Simulate lights tied to thermostat

    Room *kitchen = new Room("🍽️ Kitchen");
    kitchen->setLightCommand(toggleKitchenLightOff); // Kitchen light will turn off when thermostat changes

    livingRoom->addDevice(livingRoomLight);
    kitchen->addDevice(kitchenLight);
    livingRoom->addDevice(mainThermostat);
    livingRoom->addDevice(guestThermostat);

    // ===========================
    // 5. Create Sensors and Attach Devices
    // ===========================
    MotionSensor *motionSensor = new MotionSensor();
    SmokeSensor *smokeSensor = new SmokeSensor();

    motionSensor->addDevice(livingRoomLight);
    motionSensor->addDevice(kitchenLight);
    smokeSensor->addDevice(frontDoorLock);
    smokeSensor->addDevice(oldThermoAdapter);

    // ===========================
    // 6. Display Initial Device Statuses
    // ===========================
    simulateDelay("🌈===== Initial Device Statuses =====🌈");
    std::cout << "🔑 Front Door Lock: " << frontDoorLock->getStatus() << "\n";
    std::cout << "🔑 Back Door Lock: " << backDoorLock->getStatus() << "\n";
    std::cout << "💡 Living Room Light: " << livingRoomLight->getStatus() << "\n";
    std::cout << "💡 Kitchen Light: " << kitchenLight->getStatus() << "\n";
    std::cout << "🌡️ Main Thermostat: " << mainThermostat->getStatus()<<"\n";
    std::cout << "🌡️ Guest Thermostat: " << guestThermostat->getStatus()<<"  Temperature:  " <<oldThermo->getTemp()<<"\n";
    std::cout << "📟 Old Thermostat: " << oldThermoAdapter->getStatus() << "\n\n";

    // ===========================
    // 7. Evening Routine Simulation
    // ===========================
    simulateDelay("🎉===== Executing Evening Routine =====🎉");
    eveningRoutine->execute();

    // ===========================
    // 8. Room-Specific Commands
    // ===========================
    simulateDelay("🏠===== Living Room Routine =====");
    livingRoom->executeLightCommand(); // Turns on the living room light
    simulateDelay("🔥 Turning on Living Room Thermostat...");
    livingRoom->executeThermostatCommand(); // Toggle main thermostat

    simulateDelay("🍽️===== Kitchen Routine =====");
    kitchen->executeLightCommand(); // Turns off kitchen light

    // ===========================
    // 9. Motion Detection Simulation
    // ===========================
    simulateDelay("🏃===== Simulating Motion Detection =====");
    motionSensor->detectMotion(); // Trigger devices attached to motion sensor

    // ===========================
    // 10. Smoke Detection Simulation
    // ===========================
    simulateDelay("🔥===== Simulating Smoke Detection =====");
    smokeSensor->detectSmoke(); // Trigger smoke detection, update attached devices

    // ===========================
    // 11. Simulate Device Interaction
    // ===========================
    simulateDelay("✨===== Simulating Device Interactions =====");
    toggleLivingRoomLightOff->execute();
    unlockAllDoors.execute();

    // Adjust old thermostat using the integrator
    simulateDelay("🌡️ Increasing temperature for old thermostat...");
    dynamic_cast<ThermoIntegrator *>(oldThermoAdapter)->increase();

    // ===========================
    // 12. Final Statuses
    // ===========================
    simulateDelay("🌟===== Final Device Statuses =====🌟");

    std::cout << "🔑 Front Door Lock: " << frontDoorLock->getStatus() << "\n";
    std::cout << "🔑 Back Door Lock: " << backDoorLock->getStatus() << "\n";
    std::cout << "💡 Living Room Light: " << livingRoomLight->getStatus() << "\n";
    std::cout << "💡 Kitchen Light: " << kitchenLight->getStatus() << "\n";
    std::cout << "🌡️ Main Thermostat: " << mainThermostat->getStatus()<<"\n";
    std::cout << "🌡️ Guest Thermostat: " << guestThermostat->getStatus()<<"  Temperature:  " <<oldThermo->getTemp()<<"\n";
    std::cout << "📟 Old Thermostat: " << oldThermoAdapter->getStatus() << "\n\n";

    // ===========================
    // 13. Cleanup
    // ===========================
    printColored("🧹 Cleaning up resources...", "\033[1;31m");
    for (Device *lock : locks)
    {
        delete lock; // Free each allocated Device
    }

    delete livingRoomLight;
    delete kitchenLight;
    delete mainThermostat;
    delete guestThermostat;
    delete oldThermoAdapter;
    delete toggleLivingRoomLightOn;
    delete toggleLivingRoomLightOff;
    delete toggleKitchenLightOn;
    delete toggleKitchenLightOff;

    delete motionSensor;
    delete smokeSensor;
    delete eveningRoutine;
    delete livingRoom;
    delete kitchen;
    std::cout<<"\n\n";
    printColored("🎊 Thank you for using the Smart Home Simulator! Goodbye! 🎊", "\033[1;32m");
    std::cout<<"\n\n";

    return 0;
}
