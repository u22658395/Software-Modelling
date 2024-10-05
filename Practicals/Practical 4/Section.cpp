#ifndef SECTION_CPP
#define SECTION_CPP

#include "Section.h"
#include <string>
#include <iostream> 

    Section:: Section(std::string name) : name(name) {}
    int Section::num = 0;
    void Section::addFarmUnit(std::shared_ptr<FarmUnit> unit) {
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
            std::string colorCode = "\033[32m";
            std::string resetCode = "\033[0m";
            if(getSectionName()== "Main Farm")
            {
                colorCode="\033[33m";
            }
         return colorCode + getSectionName() + resetCode;

    }
    std:: string Section::getSectionName()
    {
        return name;
    }

    std::string Section:: getSoilStateName(){
        return farmUnits.empty() ? "Unknown" : farmUnits[0]->getSoilStateName();
    }
     Section::~Section()
    {

    }
    std::vector<std::shared_ptr<FarmUnit>> Section:: getUnits() const 
    {
        return farmUnits;
    }


#endif