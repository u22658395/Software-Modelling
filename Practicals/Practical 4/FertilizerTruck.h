#ifndef FERILIZERTRUCK_H
#define FERILIZERTRUCK_H
 
#include "Truck.h"  


class FertilizerTruck :public Truck
{
    public:
    FertilizerTruck();
    void update();
   
    void startEngine();
    
};
#endif