#include "Cropfield.h"
#include <string>
#include <iostream>
#include <algorithm> 


CropField:: CropField(std::string cropType, int capacity, std::shared_ptr<SoilState> soilState)
{
     this->croptype=cropType;
    this->capacity=capacity;
    this->soilState=soilState;
    currentStorage=100;
}
        
    int CropField::getTotalCapacity(){
        
        return capacity; 
    }

    std::string CropField::getCropType() 
    { 
            std::string colorCode = "\033[35m";
            std::string resetCode = "\033[0m";
        return colorCode+ croptype + resetCode; 
    }

    std::string CropField::getSoilStateName() 
    { 
        return soilState->getName(); 
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
  
        if(yield > currentStorage){
            cout << "Trying to harvest more than what you have planted or have in storage";
            return;
        }

        this->soilState->harvestCrops(yield);
        currentStorage-=yield;
        if(soilState->getName()!="Flooded")
        {
            std::cout << "🚜  🌾  🌽  🥕  🍅   🥒  🌿  🫒  🫑  🥬  🧑‍🌾\n";

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
       if(trucks.empty())
       {
            std:: cout <<"No trucks available for harvest. "<<std:: endl;
            return;
       }
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
            if(truck->getTruckName() =="DeliveryTruck")
            truck->update();
        }
    }

    int CropField:: getLeftoverCapacity() const
    {
        return currentStorage;
    }

    void CropField:: setCapacity(int c)
    {
        capacity=c;
    }
    

