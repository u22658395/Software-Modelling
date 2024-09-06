#ifndef DELIVERYTRUCK_CPP
#define  DELIVERYTRUCK_CPP
#include "DeliveryTruck.h" 
#include <iostream> 
    

    DeliveryTruck:: DeliveryTruck()
    {
        Tname= "DeliveryTruck";
    }
    void DeliveryTruck:: update()
    {
        std::cout << "Delivery Truck notified: Collecting harvested crops from the crop field.\n";
    }
    void DeliveryTruck:: startEngine()
    {
        std::cout << "Delivery Truck: Engine started.\n";
    }
#endif