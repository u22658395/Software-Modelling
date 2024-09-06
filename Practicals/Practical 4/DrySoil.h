#ifndef DRYSOIL_H
#define DRYSOIL_H
#include "Soilstate.h"

class DrySoil:public SoilState
{
     int harvestCrops(int baseYield) const override;
     void rain(CropField* field) override;
     std::string getName() const override;
};

#endif