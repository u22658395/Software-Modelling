#ifndef FruitfulSoil_CPP
#define FruitfulSoil_CPP
#include "FruitfulSoil.h"
#include "FloodedSoil.h"
#include "Cropfield.h"

FruitfulSoil::FruitfulSoil():SoilState("Fruitful"){}
int FruitfulSoil:: harvestCrops(int yield) 
{
    cout << "The harvest produced " << yield*3 <<endl;
    return yield*3;

}
void FruitfulSoil:: rain(std::shared_ptr<CropField> field) 
{
    field->setSoilState(std::make_shared<FloodedSoil>());
    std::cout << "  💧              💧         💧                           💧        💧           💧         💧            💧         💧           \n";
    std::cout << "        💧                 💧         💧                  💧\n";
    std::cout << "                                                                                    💧         💧           💧          💧 \n";
    std::cout << "  💧       💧                                  💧                  💧                 💧                                   💧 \n";
    std::cout << " 🌳  💧🏡🌳  🌲   👜💧 🏡   🌲       💧 🌳        🌲   💧       🌳      🏡         🌲  💧         🌳               💧  🏡    \n";
    std::cout << "🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩\n\n\n";

 
}

std::string FruitfulSoil:: getName() 
{
    return "Fruitful";
}


#endif
