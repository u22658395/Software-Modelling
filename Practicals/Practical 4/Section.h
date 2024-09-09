#ifndef SECTION_H
#define SECTION_H
#include "Farm.h"
#include <iostream>
#include <vector>
#include <memory>



class Section : public Farm {
    std::vector<std::shared_ptr<Farm>> farmUnits;
    std::string name;

public:
    Section(std::string name);

    void addFarmUnit(std::shared_ptr<Farm> unit);

    ~Section();
    std::string getCropType();
    std::string getSoilStateName() ;
     int getTotalCapacity();
    std::vector<std::shared_ptr<Farm>> getUnits() const;
    
};
#endif