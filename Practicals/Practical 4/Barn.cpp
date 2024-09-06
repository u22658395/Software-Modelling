#include "Barn.h"
 Barn:: Barn(int capacity)
 {
    this->capacity=capacity;
 }

int  Barn:: getTotalCapacity()
{ 
    return capacity; 
}
std::string  Barn:: getCropType() 
{ 
    return "None"; 
}
std::string  Barn:: getSoilStateName() 
{ 
    return "N/A"; 
}
void  Barn:: addAnimal(int a)
{
    noAnimals+=a;
    if(noAnimals>capacity)
    {
        noAnimals=capacity;
    }
}