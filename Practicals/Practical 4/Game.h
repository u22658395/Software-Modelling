#ifndef GAME_H
#define GAME_H

#include "FarmUnit.h"
#include "BFT.h"
#include "DFT.h"
#include "Section.h"
#include "BasicCropField.h"
#include "Fertilizer.h"
#include "ExtraBarn.h"
#include "DeliveryTruck.h"
#include "FertilizerTruck.h"
#include <iostream>
#include <memory>
#include <vector>
#include "DrySoil.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"
#include "Barn.h"

class Game {
private:
    std::shared_ptr<Section> mainFarmSection;
    std::vector<std::shared_ptr<Truck>> trucks;

public:
    Game();
    void setup();
    void start();
};

#endif
