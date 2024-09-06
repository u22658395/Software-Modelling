#ifndef DELIVERYTRUCK_H
#define  DELIVERYTRUCK_H
 
#include "Truck.h"  

class DeliveryTruck :public Truck
{
    public:
    
    void update();
   
    void startEngine();
    
};
#endif