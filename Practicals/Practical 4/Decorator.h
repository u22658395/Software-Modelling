#ifndef Decorator_H
#define  Decorator_H
#include <memory>
#include "Cropfield.h"

class Decorator: public CropField
{
    protected:
    std::shared_ptr<CropField> decoratedField;

    public:
    // Decorator(std::shared_ptr<CropField> field) : decoratedField(field) { }
        Decorator(std::shared_ptr<CropField> field);
        virtual int harvestCrops(int baseYield)=0;
        virtual void increaseProduction()=0;
        virtual int getLeftoverCapacity() const=0;
        // void addFarmUnit(std::shared_ptr<Farm> unit);
        virtual ~Decorator() = default;
};

#endif