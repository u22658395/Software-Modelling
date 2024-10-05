#ifndef CROPFIELD_H
#define CROPFIELD_H
#include <iostream>
#include "FarmUnit.h"
#include "Soilstate.h"
#include <vector>
#include "Truck.h"
#include <memory>

class CropField : public FarmUnit {

protected:
    std::string cropType;
    int capacity;
    int currentStorage;
    std::shared_ptr<SoilState> soilState;
    std::vector<std::shared_ptr<Truck>> trucks;  // List of trucks (observers)

public:
    CropField();
    CropField(std::string cropType, int capacity, std::shared_ptr<SoilState> soilState);

    int getTotalCapacity() ;
    std::string getCropType();
    std::string getSoilStateName();
    


    virtual int harvestCrops(int baseYield);
    virtual void increaseProduction();
    virtual int getLeftoverCapacity() const ;
    

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

        void callDeliveryTruck() ;
    
        void callFertilizerTruck() ;

     void setCapacity(int c);

    // void addFarmUnit(std::shared_ptr<Farm> unit){
        
    // }
    std::vector<std::shared_ptr<FarmUnit>> getUnits() const{
        
        return {};
    } 

     std::shared_ptr<SoilState> getState()
     {
        return soilState;
     }
    

};
#endif