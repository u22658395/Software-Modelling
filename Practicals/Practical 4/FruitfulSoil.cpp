#ifndef FruitfulSoil_CPP
#define FruitfulSoil_CPP
#include "FruitfulSoil.h"
#include "FloodedSoil.h"


int harvestCrops(int baseYield) 
{
    return baseYield*3;

}
void rain(CropField* field) 
{
    field->setSoilState(new FloodedSoil() );
}
std::string getName() 
{
    return "Fruitful";
}


#endif
