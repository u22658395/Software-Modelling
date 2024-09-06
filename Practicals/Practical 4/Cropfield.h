#ifndef CROPFIELD_H
#define CROPFIELD_H
#include <iostream>
#include "Farm.h"
#include "Soilstate.h"
#include <vector>
#include "Truck.h"
#include <memory>
class CropField : public Farm {

protected:
    std::string cropType;
    int capacity;
    int currentStorage;
    std::shared_ptr<SoilState> soilState;
    std::vector<std::shared_ptr<Truck>> trucks;  // List of trucks (observers)

public:
    CropField(std::string cropType, int capacity, std::string soilState);

    int getTotalCapacity() override;
    std::string getCropType() override;
    std::string getSoilStateName() override;
    
    void Plant(int p);
    void WaterPlant(double w);

    virtual int harvestCrops(int baseYield) = 0;
    virtual void increaseProduction() = 0;
    virtual int getLeftoverCapacity() const = 0;
    

    //observer
    void addTruck(std::shared_ptr<Truck> truck) ;

    void removeTruck(std::shared_ptr<Truck> truck);
    void notify() ;
    void Fnotify();
    void Dnotify();

    void harvest(int yield);

    void checkSoil() ;

    void buyTruck(std::shared_ptr<Truck> truck) ;
    void sellTruck(std::shared_ptr<Truck> truck);

        void CropField:: callDeliveryTruck() ;
    
        void CropField:: callFertilizerTruck() ;
    

};
#endif