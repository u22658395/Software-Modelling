#ifndef Fertilizer_H
#define  Fertilizer_H
#include "Decorator.h"

class Fertilizer : public Decorator
{
    public:
    Fertilizer(std::shared_ptr<CropField> field);
    void increaseProduction();
    int harvestCrops(int yield);
    int getLeftoverCapacity();
        
    

};

#endif