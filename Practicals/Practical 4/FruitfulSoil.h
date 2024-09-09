#ifndef FruitfulSoil_H
#define FruitfulSoil_H
#include "Soilstate.h"
#include <memory>
#include <string>

class FruitfulSoil: public SoilState
{
     int harvestCrops(int baseYield);
     void rain(CropField* field) ;
     std::string getName();
};

#endif