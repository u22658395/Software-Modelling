#ifndef DrySoil_CPP
#define DrySoil_CPP
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "Cropfield.h"

DrySoil::DrySoil():SoilState("Dry"){}

int DrySoil ::harvestCrops(int yield) 
{
    cout << "The harvest produced " << yield <<endl;
    return yield;

}

void DrySoil :: rain(std::shared_ptr<CropField> field) 
{
    field->setSoilState(std::make_shared<FruitfulSoil>() );

    std::cout << "  💧              💧         💧                           💧        💧           💧         💧            💧         💧           \n";
    std::cout << "        💧                 💧         💧                  💧\n";
    std::cout << "                                                                                    💧         💧           💧          💧 \n";
    std::cout << "  💧       💧                                  💧                  💧                 💧                                   💧 \n";
    std::cout << " 🌳  💧🏡🌳  🌲   👜💧 🏡   🌲       💧 🌳        🌲   💧       🌳      🏡         🌲  💧         🌳               💧  🏡    \n";
    std::cout << "🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫🟫\n\n\n";

 
}
std::string DrySoil :: getName() 
{
    return "Dry";
}


#endif
