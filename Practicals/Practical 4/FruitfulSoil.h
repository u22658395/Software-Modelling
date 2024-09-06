#ifndef FruitfulSoil_H
#define FruitfulSoil_H
#include "Soilstate.h"

class FruitfulSoil:public SoilState
{
     int harvestCrops(int baseYield) const override;
     void rain(CropField* field) override;
     std::string getName() const override;
};

#endif