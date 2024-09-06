#ifndef FERILIZERTRUCK_CPP
#define FERILIZERTRUCK_CPP
#include <iostream>
 
#include "FertilizerTruck.h"  

FertilizerTruck:: FertilizerTruck()
{
    Tname= "FertilizerTruck";
}
void FertilizerTruck:: update()
{
    std::cout << "Fertilizer Truck notified: Delivering fertilizer to the crop field.\n";
}
void FertilizerTruck:: startEngine()
{
    std::cout << "Fertilizer Truck: Engine started.\n";
}

#endif