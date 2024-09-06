#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "Soilstate.h"

class FloodedSoil:public SoilState
{
     int harvestCrops(int baseYield) const override;
     void rain(CropField* field) override;
     std::string getName() const override;
};



#endif