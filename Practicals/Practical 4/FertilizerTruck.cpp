#ifndef FERILIZERTRUCK_CPP
#define FERILIZERTRUCK_CPP
#include <iostream>
 
#include "FertilizerTruck.h"  

FertilizerTruck:: FertilizerTruck()
{
    Tname= "FertilizerTruck";
}
// void FertilizerTruck:: update()
// {
//     std::cout << "Fertilizer Truck notified: Delivering fertilizer to the crop field.\n";
           
//                      std::cout << R"(
                     
// ──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌............................................................
// ───▄▄██▌█ Fertilizer Truck
// ▄▄▄▌▐██▌█                           _____  ______  _____  ____  _____  ____  _____  _____  
// ███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
// ▀(⊙)▀▀▀▀▀▀▀(⊙)(⊙)▀▀▀▀▀▀▀▀▀▀(⊙ .........................................................
//     )" << std::endl;
    
// }

void FertilizerTruck::update()
{
    
    std::cout << "\033[31mFertilizer Truck notified: Delivering fertilizer to the crop field.\033[0m\n";
           
    
    std::cout << R"(
 
──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌............................................................
───▄▄██▌█ Fertilizer Truck
▄▄▄▌▐██▌█                           _____  ______  _____  ____  _____  ____  _____  _____  
███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
▀(⊙)▀▀▀▀▀▀▀(⊙)(⊙)▀▀▀▀▀▀▀▀▀▀(⊙ .........................................................
    )" << std::endl;
}

void FertilizerTruck:: startEngine()
{
    std::cout << "Fertilizer Truck: Engine started.\n";
}

#endif