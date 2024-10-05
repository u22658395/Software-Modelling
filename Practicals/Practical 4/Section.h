#ifndef SECTION_H
#define SECTION_H
#include "FarmUnit.h"
#include <iostream>
#include <vector>
#include <memory>



class Section : public FarmUnit {
    std::vector<std::shared_ptr<FarmUnit>> farmUnits;
    std::string name;
    static int num;

public:
    
    Section(std::string name);

    void addFarmUnit(std::shared_ptr<FarmUnit> unit);

    ~Section();
    std::string getCropType();
    std::string getSoilStateName() ;
     int getTotalCapacity();
    std::vector<std::shared_ptr<FarmUnit>> getUnits() const;
    std:: string getSectionName();
    
};
#endif