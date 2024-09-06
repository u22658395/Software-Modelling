#ifndef DrySoil_CPP
#define DrySoil_CPP
#include "DrySoil.h"
#include "FruitfulSoil.h"


int harvestCrops(int baseYield) 
{
    return baseYield;

}
void rain(CropField* field) 
{
    field->setSoilState(new FruitfulSoil() );
}
std::string getName() 
{
    return "Dry";
}


#endif
