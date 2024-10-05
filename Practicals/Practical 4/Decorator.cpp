#ifndef Decorator_CPP
#define  Decorator_CPP
#include "Decorator.h"

Decorator::Decorator(std::shared_ptr<CropField> field) : CropField(*field), decoratedField(field) {}

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



int CropField::harvestCrops(int baseYield)
{
    return baseYield;
}
void CropField::increaseProduction()
{

}
// int CropField::getLeftoverCapacity()const 
// {
//     return currentStorage;
// }

#endif