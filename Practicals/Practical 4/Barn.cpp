#include "Barn.h"
 Barn:: Barn(int capacity)
 {
    this->capacity=capacity;
    noPlants=0;
 }

int  Barn:: getTotalCapacity()
{ 
    return capacity; 
}
std::string  Barn:: getCropType() 
{ 
    return "Barn"; 
}
std::string  Barn:: getSoilStateName() 
{ 
    return "N/A"; 
}
void  Barn:: addCrops(int a)
{
    noPlants+=a;
    if(noPlants>capacity)
    {
        noPlants=capacity;
    }
}