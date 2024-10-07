#ifndef ExtraBarn_CPP
#define  ExtraBarn_CPP
#include"ExtraBarn.h"


ExtraBarn:: ExtraBarn(std::shared_ptr<CropField> field, int extraCapacity)
    : Decorator(field), extraCapacity(extraCapacity) {}

    void ExtraBarn:: increaseProduction()  {
        std::cout<< "\033[36mField with extra Barns increasing production\033[0m"<<std::endl;
        decoratedField->setCapacity(extraCapacity);
        decoratedField->increaseProduction(); 
        
    }
    int ExtraBarn::harvestCrops(int yield)
    {
        std::cout<< "\033[36mHarvesting cropfield with extra Barns\033[0m"<<std::endl;
        decoratedField->harvest(yield);
        return yield;
    }
    int ExtraBarn::getLeftoverCapacity() const
    {
        std::cout<< "\033[36m Capacity of cropfield with extra Barns\033[0m"<<std::endl;
        
        return decoratedField->getLeftoverCapacity();
    }


#endif