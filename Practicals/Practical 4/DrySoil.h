#ifndef DRYSOIL_H
#define DRYSOIL_H
#include "Soilstate.h"
#include <string>
#include <memory>

class DrySoil:public SoilState
{
     int harvestCrops(int baseYield);
     void rain(CropField* field) ;
     std::string getName();
};

#endif