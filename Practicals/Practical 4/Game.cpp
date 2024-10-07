
#ifndef GAME_CPP
#define GAME_CPP

#include "Game.h"
#include <chrono>
#include <thread>
#include <iostream>


Game::Game() {
    mainFarmSection = std::make_shared<Section>("Main Farm");

    auto northSection = std::make_shared<Section>("North Farm");
    auto southSection = std::make_shared<Section>("South Farm");

    mainFarmSection->addFarmUnit(northSection);
    mainFarmSection->addFarmUnit(southSection);
}

void Game::setup() {
    auto northSection = std::dynamic_pointer_cast<Section>(mainFarmSection->getUnits()[0]);
    auto southSection = std::dynamic_pointer_cast<Section>(mainFarmSection->getUnits()[1]);

    // Adding crop fields and applying Decorators
    auto cropField1 = std::make_shared<BasicCropField>("Wheat", 100, std::make_shared<DrySoil>());
    auto cropField2 = std::make_shared<BasicCropField>("Corn", 120, std::make_shared<FruitfulSoil>());
    auto cropField3 = std::make_shared<BasicCropField>("Barley", 150, std::make_shared<FloodedSoil>());

    auto barn= std::make_shared<Barn>(20);
    


    auto fertilizerField1 = std::make_shared<Fertilizer>(cropField1);
    auto extraBarnField2 = std::make_shared<ExtraBarn>(cropField2, 50);

    fertilizerField1->increaseProduction();
    fertilizerField1-> harvestCrops(10);
    fertilizerField1->getCapacity();



    extraBarnField2->increaseProduction();
    extraBarnField2-> harvestCrops(10);
    
    extraBarnField2->getCapacity();
    

    northSection->addFarmUnit(fertilizerField1);
    northSection->addFarmUnit(extraBarnField2);
    northSection->addFarmUnit(cropField3);

    auto cropField4 = std::make_shared<BasicCropField>("Soy", 90, std::make_shared<DrySoil>());
    southSection->addFarmUnit(cropField4);
    southSection->addFarmUnit(cropField2);
    southSection->addFarmUnit(barn);

    // Adding trucks
    auto deliveryTruck = std::make_shared<DeliveryTruck>();
    auto fertilizerTruck = std::make_shared<FertilizerTruck>();

    trucks.push_back(deliveryTruck);
    trucks.push_back(fertilizerTruck);

    fertilizerField1->buyTruck(fertilizerTruck);
    fertilizerField1->buyTruck(deliveryTruck);
    extraBarnField2->buyTruck(deliveryTruck);
    // extraBarnField2->addTruck(fertilizerTruck);
    extraBarnField2->buyTruck(fertilizerTruck);

    
}

void Game::start() {
     std::cout<<"\n\n\n";
    std::cout << "Game Started!" << std::endl;
    // animate("Loading farm details");
    std::cout << "////////////Breadth First Traversal (BFT)//////////////////" << std::endl;

    BFT bft(mainFarmSection);
    // bft.firstFarm();
    while (!bft.isDone()) {
        auto currentFarm = bft.currentFarm();
        // animate("Checking farm " + currentFarm->getCropType(), 3);
        std::cout<< currentFarm->getCropType() << " (Capacity: " << currentFarm->getTotalCapacity() << ")" << std::endl;
        bft.next();
    }
    std::cout<<"\n\n\n";
    std::cout << "////////////Depth First Traversal (DFT)//////////////////" << std::endl;
    DFT dft(mainFarmSection);
    dft.firstFarm();
    while (!dft.isDone()) {
        auto currentFarm = dft.currentFarm();
        // animate("Inspecting farm " + currentFarm->getCropType(), 2);
        std::cout<< currentFarm->getCropType() << " (Capacity: " << currentFarm->getTotalCapacity() << ")" << std::endl;
        dft.next();
    }
    std::cout<<"\n\n\n";
    // Simulate logistics operations with trucks
    std::cout << "////////////Logistics Operations//////////////////" << std::endl;
    // animate("Trucks are delivering fertilizer", 6);
    for (auto& truck : trucks) {
        truck->startEngine();
        truck->update();
    }

    // Applying Fertilizer
    std::cout << "Applying Fertilizer to all fields..." << std::endl;
    for (auto& section : mainFarmSection->getUnits()) {
        auto subSection = std::dynamic_pointer_cast<Section>(section);
        if (subSection) {
            for (auto& field : subSection->getUnits()) {
                auto cropField = std::dynamic_pointer_cast<BasicCropField>(field);
                if (cropField) {
                    cropField->checkSoil();
                    // animate("Fertilizing " + cropField->getCropType(), 4);
                }
            }
        }
    }

     std::cout<<"\n\n\n";
    std::cout << "RAINY DAY" << std::endl;
    for (auto& section : mainFarmSection->getUnits()) {
        auto subSection = std::dynamic_pointer_cast<Section>(section);
        if (subSection) {
            for (auto& field : subSection->getUnits()) {
                auto cropField = std::dynamic_pointer_cast<BasicCropField>(field);
                if (cropField) {
                    std::cout<<"Field: "<<cropField->getCropType()<<std::endl;
                    cropField->getState()->rain(cropField);
                }
            }
        }
    }
    // Harvesting
     std::cout<<"\n\n\n";
    std::cout << "Harvesting crops..." << std::endl;
    for (auto& section : mainFarmSection->getUnits()) {
        auto subSection = std::dynamic_pointer_cast<Section>(section);
        if (subSection) {
            for (auto& field : subSection->getUnits()) {
                auto cropField = std::dynamic_pointer_cast<BasicCropField>(field);
                if (cropField) {
                    std::cout<<"Field: "<<cropField->getCropType()<<std::endl;
                    cropField->harvest(50);  
                    // animate("Harvesting " + cropField->getCropType(), 5);
                }
            }
        }
    }


    // Display storage capacity after harvest
    std::cout << "Trucks in storage: " << std::endl;
    for (auto& truck : trucks) {
        std::cout << truck->getTruckName()<< std::endl;

    }
    

    

}
#endif

