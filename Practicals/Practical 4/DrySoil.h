#ifndef DRYSOIL_H
#define DRYSOIL_H
#include "Soilstate.h"
#include <string>
#include <memory>

class DrySoil:public SoilState
{
     public:
     DrySoil();
     int harvestCrops(int baseYield);
     void rain(std::shared_ptr<CropField> field) ;
     std::string getName();
};

#endif