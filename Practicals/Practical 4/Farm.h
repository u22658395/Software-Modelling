#ifndef FARM_H
#define FARM_H
#include <iostream>

#include <memory>
#include <vector>
using namespace std;

class SoilState;

class Farm {
protected:
    int capacity;
    std:: string croptype;
    std::shared_ptr<SoilState> soilState;
    double waterlevel;
    int noPlants;
    int noAnimals;
    
public:
    virtual int getTotalCapacity() = 0;
    virtual std::string getCropType() = 0;
    virtual std::string getSoilStateName()= 0;
    virtual ~Farm() = default;
    // virtual void addFarmUnit(std::shared_ptr<Farm> unit)=0;
    virtual std::vector<std::shared_ptr<Farm>> getUnits() const = 0;
    void setSoilState(std::shared_ptr<SoilState> soilState);
    
    int getCapacity();
    
    
};


#endif