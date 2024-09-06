#include "Section.h"
#include <string>
#include <iostream> 

    Section:: Section(std::string name) : name(name) {}

    void Section::addFarmUnit(Farm* unit) {
        farmUnits.push_back(unit);
    }

    int Section:: getTotalCapacity() {
        int totalCapacity = 0;
        for (const auto& unit : farmUnits) {
            totalCapacity += unit->getTotalCapacity();
        }
        return totalCapacity;
    }

    std::string Section:: getCropType(){
        return "Mixed crops"; 
    }

    std::string Section:: getSoilStateName(){
        return farmUnits.empty() ? "Unknown" : farmUnits[0]->getSoilStateName();
    }
     Section::~Section()
    {

    }