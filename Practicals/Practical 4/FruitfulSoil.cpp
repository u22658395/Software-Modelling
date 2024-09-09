#ifndef FruitfulSoil_CPP
#define FruitfulSoil_CPP
#include "FruitfulSoil.h"
#include "FloodedSoil.h"
#include "Cropfield.h"


int FruitfulSoil:: harvestCrops(int yield) 
{
    cout << "The harvest produced " << yield*3 ;
    return yield*3;

}
void FruitfulSoil:: rain(CropField* field) 
{
    field->setSoilState(std::make_shared<FloodedSoil>());
}
std::string FruitfulSoil:: getName() 
{
    return "Fruitful";
}


#endif
