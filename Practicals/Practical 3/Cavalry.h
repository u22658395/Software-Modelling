#ifndef CAVALRY_H
#define CAVALRY_H
#include <iostream>
#include "LegionUnit.h"

class Cavalry : public LegionUnit {
private:
    // std::string name;
    std::vector<UnitComponent*> units;

public:
    Cavalry() : LegionUnit(100, 20, "Cavalry") {}

void move() {
    std::cout << name << " Cavalry moves" << std::endl;
}

void attack() {
    std::cout << name << " Cavalry attacks" << std::endl;
}

    ~Cavalry()
    {
        for (auto unit : units) {
        delete unit;
    }
    }
    void add(UnitComponent* component) {
    units.push_back(component);
}

void remove(UnitComponent* component) {
    for (auto it = units.begin(); it != units.end(); ++it) {
        if (*it == component) {
            units.erase(it);
            break;  // Break out of the loop after removing the component
        }
    }
}

};

#endif

