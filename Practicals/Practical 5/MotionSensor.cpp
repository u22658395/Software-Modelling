#include "MotionSensor.h"
#include <iostream>

MotionSensor:: MotionSensor(/* args */)
{

}
MotionSensor:: ~MotionSensor()
{
    
}
void MotionSensor:: addDevice(Observer* device)
{
    devices.push_back(device);
}
void MotionSensor:: removeDevice(Observer* device)
{
    for (auto i = devices.begin(); i != devices.end(); ++i)
    {
        if(*i==device)
        {
            devices.erase(i);
            break;
        }
    }
}

void MotionSensor:: notifyDevices(Observer* device)
{
        for (const auto& device : devices) {
            device->update();
        }
}
void MotionSensor:: detectMotion()
{
    std::cout << "Motion detected!\n";
        notifyDevices("MotionDetected");
}
