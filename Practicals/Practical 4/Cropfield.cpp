#include "Cropfield.h"
#include <string>
#include <iostream>
#include <algorithm> 

CropField:: CropField(std::string cropType, int capacity, std::string soilState)
{

}
        
    int CropField::getTotalCapacity(){
        return capacity; 
    }
    std::string CropField::getCropType() 
    { 
        return croptype; 
    }
    std::string CropField::getSoilStateName() 
    { 
        return state->getName(); 
    }
    void CropField::Plant(int p)
    {
        noPlants+=p;
        if(noPlants>capacity)
        {
            noPlants=capacity;
        }
    }
    void CropField::WaterPlant(double w)
    {
        waterlevel+=w;
        
    }

    void CropField::addTruck(std::shared_ptr<Truck> truck) 
    {
        trucks.push_back(truck);
    }

    void CropField::removeTruck(std::shared_ptr<Truck> truck) 
    {
        trucks.erase(std::remove(trucks.begin(), trucks.end(), truck), trucks.end());
    }

    void CropField::notify() 
    {
        for (const auto& truck : trucks) {
            truck->update();
        }
    }

    void CropField:: harvest(int yield) 
    {
        currentStorage = std::min(currentStorage + yield, capacity);
        if (currentStorage == capacity) {
           callDeliveryTruck();
        }
    }

    void CropField:: checkSoil() 
    {
        if (soilState->getName() == "Dry") {
            callFertilizerTruck();
        }
        
    }

    void CropField:: buyTruck(std::shared_ptr<Truck> truck)
     {
        addTruck(truck);
        std::cout << "Truck purchased and added to the crop field.\n";
    }

    void CropField:: sellTruck(std::shared_ptr<Truck> truck) 
    {
        removeTruck(truck);
        std::cout << "Truck sold and removed from the crop field.\n";
    }

    void CropField:: callDeliveryTruck() 
    {
        std::cout << "Calling truck for operation...\n";
        Dnotify();  // Notify all trucks
    }
        void CropField:: callFertilizerTruck() 
    {
        std::cout << "Calling truck for operation...\n";
        Fnotify();  // Notify all trucks
    }

    void CropField:: Fnotify()
    {
        for (const auto& truck : trucks) 
        {
            if(truck->getTruckName()=="FertilizerTruck")
            truck->update();
        }
    }
    void CropField:: Dnotify()
    {
        for (const auto& truck : trucks) 
        {
            if(truck->getTruckName()=="DeliveryTruck")
            truck->update();
        }
    }

