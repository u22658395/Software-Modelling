#ifndef CAVALRY_H
#define CAVALRY_H
#include <iostream>
#include <vector> 
#include "LegionUnit.h"

class Cavalry : public LegionUnit {
private:
    // std::string name;
    std::vector<LegionUnit*> units;

public:
    Cavalry() : LegionUnit(100, 20, "Cavalry",100,100) {}

void move() {
    std::cout << " Cavalry moves" << std::endl;
}

void attack() {
    std::cout  << " Cavalry attacks" << std::endl;
}

    ~Cavalry()
    {
        for (auto unit : units) {
        if(unit!=NULL)
            {
                delete unit;
            }
    }
    }
    void add(LegionUnit* component) {
    units.push_back(component);
}

void remove(LegionUnit* component) {
    for (auto it = units.begin(); it != units.end(); ++it) {
        if (*it == component) {
            units.erase(it);
            break;  // Break out of the loop after removing the component
        }
    }
}

};

#endif

