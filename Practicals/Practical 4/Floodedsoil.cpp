#ifndef FloodedSoil_CPP
#define FloodedSoil_CPP
#include "FloodedSoil.h"

#include "Cropfield.h"

int FloodedSoil:: harvestCrops(int yield)
{
    cout << "The harvest produced " << yield*0 << " - the soiil is floodes";
    return 0;

}
void FloodedSoil:: rain(CropField* field) 
{
    
}
std::string FloodedSoil:: getName() 
{
    return "Flooded";
}


#endif
