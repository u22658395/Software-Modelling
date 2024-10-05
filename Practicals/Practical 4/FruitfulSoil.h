#ifndef FruitfulSoil_H
#define FruitfulSoil_H
#include "Soilstate.h"
#include <memory>
#include <string>

class FruitfulSoil: public SoilState
{    
     public:
     FruitfulSoil();
     int harvestCrops(int baseYield);
     void rain(std::shared_ptr<CropField> field) ;
     std::string getName();
};

#endif