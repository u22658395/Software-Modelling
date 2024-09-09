#ifndef DrySoil_CPP
#define DrySoil_CPP
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "Cropfield.h"

int DrySoil ::harvestCrops(int yield) 
{
    cout << "The harvest produced " << yield ;
    return yield;

}

void DrySoil :: rain(CropField* field) 
{
    field->setSoilState(std::make_shared<FruitfulSoil>() );
}
std::string DrySoil :: getName() 
{
    return "Dry";
}


#endif
