#ifndef ExtraBarn_CPP
#define  ExtraBarn_CPP
#include"ExtraBarn.h"


ExtraBarn:: ExtraBarn(std::shared_ptr<CropField> field, int extraCapacity)
    : Decorator(field), extraCapacity(extraCapacity) {}

int ExtraBarn:: getLeftoverCapacity() const
{
    return decoratedField->getLeftoverCapacity() + extraCapacity;
}


#endif