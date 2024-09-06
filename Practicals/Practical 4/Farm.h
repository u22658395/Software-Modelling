#ifndef FARM_H
#define FARM_H
#include <iostream>
#include "Soilstate.h"
using namespace std;

class Farm {
protected:
    int capacity;
    std:: string croptype;
    SoilState* state;
    double waterlevel;
    int noPlants;
    int noAnimals;
    
public:
    virtual int getTotalCapacity() = 0;
    virtual std::string getCropType() = 0;
    virtual std::string getSoilStateName()= 0;
    virtual ~Farm() = default;
    void setSoilState(SoilState* state)
    {
        this->state=state;
    }
    
};


#endif