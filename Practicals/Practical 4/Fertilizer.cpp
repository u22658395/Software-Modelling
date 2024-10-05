#ifndef Fertilizer_CPP
#define  Fertilizer_CPP
#include "Fertilizer.h"
#include "FruitfulSoil.h"

    Fertilizer:: Fertilizer(std::shared_ptr<CropField> field) : Decorator(field) {}

    void Fertilizer:: increaseProduction()  {
        std::cout << "\033[33mFertilizer increasing production\033[0m\n";
        decoratedField->setSoilState( std::make_shared<FruitfulSoil>());
        decoratedField->increaseProduction(); 
        
    }
    int Fertilizer::harvestCrops(int yield)
    {
        std::cout<< "\033[33mHarvesting fertilized crops\033[0m"<<std::endl;
        decoratedField->harvest(yield);
        return yield;
    }
    int Fertilizer::getLeftoverCapacity()
    {
        std::cout<< "\033[33mCapacity of fertilized crops\033[0m"<<std::endl;
        return decoratedField->getLeftoverCapacity();
    }

    

#endif