#ifndef ARTILLERY_H
#define ARTILLERY_H
#include <iostream>
#include "LegionUnit.h"

class Artillery : public LegionUnit {
private:
    // std::string name;
    std::vector<UnitComponent*> units;

public:
    Artillery() : LegionUnit(100, 20, "Artillery") {}

void move() {
    std::cout << name << " Artillery moves" << std::endl;
}

void attack() {
    std::cout << name << " Artillery attacks" << std::endl;
}

    virtual ~Artillery()
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

