#ifndef FloodedSoil_CPP
#define FloodedSoil_CPP
#include "FloodedSoil.h"

#include "Cropfield.h"

FloodedSoil::FloodedSoil():SoilState("Flooded"){}

int FloodedSoil:: harvestCrops(int yield)
{
    cout << "The harvest produced " << yield*0 << " - the soiil is floodes"<<endl;
    return 0;

}
void FloodedSoil:: rain(std::shared_ptr<CropField> field) 
{
        std::cout << "  💧              💧         💧                           💧        💧           💧         💧            💧         💧           \n";
    std::cout << "        💧                 💧         💧                  💧\n";
    std::cout << "                                                                                    💧         💧           💧          💧 \n";
    std::cout << "  💧       💧                                  💧                  💧                 💧                                   💧 \n";
    std::cout << " 🌳  💧🏡🌳  🌲   👜💧 🏡   🌲       💧 🌳        🌲   💧       🌳      🏡         🌲  💧         🌳               💧  🏡    \n";
    std::cout << "🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n";

 
}
std::string FloodedSoil:: getName() 
{
    return "Flooded";
}


#endif
