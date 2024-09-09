#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H
#include <memory>
#include <string>
#include "Soilstate.h"

class FloodedSoil:public SoilState
{
     int harvestCrops(int baseYield);
     void rain(CropField* field) ;
     std::string getName();
};



#endif