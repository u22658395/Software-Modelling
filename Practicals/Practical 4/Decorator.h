#ifndef Decorator_H
#define  Decorator_H
#include <memory>
#include "Cropfield.h"

class Decorator: public CropField
{
    protected:
    std::shared_ptr<CropField> decoratedField;

    public:
    Decorator(std::shared_ptr<CropField> field) : decoratedField(field) {}

    int harvestCrops(int baseYield) override ;

    void increaseProduction() override ;

    int getLeftoverCapacity() const override ;
};

#endif