  #include "SmokeSensor.h"  
    
    void SmokeSensor:: addDevice(Device* device)
{
    devices.push_back(device);
}
void SmokeSensor:: removeDevice(Device* device)
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
    void SmokeSensor:: notifyDevices( std::string event){
        std::cout << "Smoke detected: " << event << "\nNotifying devices...\n";
        for (const auto& device : devices) {
            device->update();
        }
    }

    // Simulate smoke detection
    void SmokeSensor:: detectSmoke() {
        std::cout << "\nSmoke detected!🔥🔥🔥🔥\n";
        notifyDevices("SmokeDetected");
    }

    SmokeSensor::~SmokeSensor()
    {
        devices.clear();
    }