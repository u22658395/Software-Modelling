#ifndef BARN_H
#define BARN_H
#include <string>
#include <iostream>
#include "FarmUnit.h"

class Barn : public FarmUnit {
 
public:
    Barn(int capacity);

    int getTotalCapacity() override;
    std::string getCropType() override;
    void addCrops(int a);
    std:: string getSoilStateName();
    std::vector<std::shared_ptr<FarmUnit>> getUnits() const
    {
        std:: cout<< "Number of crops in the barn: "<< noPlants<<std:: endl;
        return {};
    }
};  
#endif