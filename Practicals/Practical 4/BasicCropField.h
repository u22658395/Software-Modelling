#ifndef BasicCropField_H
#define  BasicCropField_H
#include "Cropfield.h"
#include "Soilstate.h"
#include "FruitfulSoil.h"
#include <memory>
class BasicCropField : public CropField
{


    public:
    BasicCropField(std::string cropType, int capacity, std::shared_ptr<SoilState> initialState);
       

    int harvestCrops(int baseYield) override;

    void increaseProduction() override ;

    int getLeftoverCapacity() const override;
};

#endif