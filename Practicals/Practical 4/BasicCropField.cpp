#ifndef BasicCropField_CPP
#define  BasicCropField_CPP
#include "BasicCropField.h"

BasicCropField:: BasicCropField(std::string cropType, int capacity, std::shared_ptr<SoilState> initialState)
{

}
int BasicCropField:: harvestCrops(int baseYield) {
        int actualYield = soilState->harvestCrops(baseYield);
        currentStorage = std::min(currentStorage + actualYield, totalCapacity);
        return actualYield;
    }

    void BasicCropField:: increaseProduction() {
        if (soilState->getName() == "Dry") {
            soilState = std::make_shared<FruitfulSoil>();  // Transition to FruitfulSoil
        }
    }

    int BasicCropField:: getLeftoverCapacity() const {
        return totalCapacity - currentStorage;
    }
#endif