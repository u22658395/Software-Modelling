#ifndef Fertilizer_CPP
#define  Fertilizer_CPP
#include "Fertilizer.h"

    Fertilizer:: Fertilizer(std::shared_ptr<CropField> field) : Decorator(field) {}

    void Fertilizer:: increaseProduction()  {
        decoratedField->increaseProduction();  // Apply fertilizer
        // Additional logic if needed
    }
    int Fertilizer::harvestCrops(int yield)
    {
        decoratedField->harvest(yield);
    }
    int Fertilizer::getLeftoverCapacity()
    {
        return decoratedField->getLeftoverCapacity();
    }

    

#endif