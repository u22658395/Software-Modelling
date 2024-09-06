#ifndef SECTION_H
#define SECTION_H
#include "Farm.h"
#include <iostream>
#include <vector>



class Section : public Farm {
    std::vector<Farm*> farmUnits;
    std::string name;
public:
    Section(std::string name);

    void addFarmUnit(Farm* unit);

    ~Section();
    std::string getCropType();
    std::string getSoilStateName() ;
     int getTotalCapacity();
};
#endif