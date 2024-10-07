#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H
#include <memory>
#include <string>
#include "Soilstate.h"

class FloodedSoil:public SoilState
{    public:
     FloodedSoil();
     int harvestCrops(int baseYield);
     void rain(std::shared_ptr<CropField> field) ;
     std::string getName();
};



#endif