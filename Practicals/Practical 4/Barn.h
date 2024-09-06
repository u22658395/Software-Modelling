#ifndef BARN_H
#define BARN_H
#include <string>
#include <iostream>
#include "Farm.h"

class Barn : public Farm {
 
public:
    Barn(int capacity);

    int getTotalCapacity() override;
    std::string getCropType() override;
    std::string getSoilStateName() override;
    void addAnimal(int a);
};  
#endif