#ifndef Decorator_CPP
#define  Decorator_CPP
#include "Decorator.h"
int Decorator:: harvestCrops(int baseYield)  
{
    return decoratedField->harvestCrops(baseYield);
}

void Decorator:: increaseProduction()  
{
    decoratedField->increaseProduction();
}

int Decorator:: getLeftoverCapacity() const  
{
    return decoratedField->getLeftoverCapacity();
}

#endif