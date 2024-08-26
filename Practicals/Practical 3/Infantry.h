#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
#include "LegionUnit.h"

class Infantry : public LegionUnit {
private:
    // std::string name;
    std::vector<UnitComponent*> units;

public:
    Infantry() : LegionUnit(100, 20, "Infantry") {}

void move() {
    std::cout << name << " infantry moves" << std::endl;
}

void attack() {
    std::cout << name << " infantry attacks" << std::endl;
}

    ~Infantry()
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

