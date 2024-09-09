#ifndef BasicCropField_CPP
#define  BasicCropField_CPP
#include <algorithm>
#include "BasicCropField.h"

BasicCropField:: BasicCropField(std::string cropType, int capacity, std::shared_ptr<SoilState> initialState) :  CropField(cropType,capacity,initialState)
{
}
int BasicCropField:: harvestCrops(int baseYield) {
        int actualYield = soilState->harvestCrops(baseYield);
        currentStorage = std::min(currentStorage + actualYield, capacity);
        return actualYield;
    }

    void BasicCropField:: increaseProduction() {
        if (soilState->getName() == "Dry") {
            soilState = std::make_shared<FruitfulSoil>();  // Transition to FruitfulSoil
        }
    }

    int BasicCropField:: getLeftoverCapacity() const {
        return capacity - currentStorage;
    }
#endif