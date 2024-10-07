#ifndef DELIVERYTRUCK_H
#define  DELIVERYTRUCK_H
 
#include "Truck.h"  

class DeliveryTruck :public Truck
{
    public:
    DeliveryTruck();
    void update();
   
    void startEngine();
    
};
#endif