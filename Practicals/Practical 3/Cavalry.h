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
<<<<<<< HEAD
      std::cout << R"(
/﹋\__
(`_´)
<    <o----(::::::::::>
_/﹋\_
    )"
    
<< std::endl;
=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
}

    ~Cavalry()
    {
        for (auto unit : units) {
        if(unit!=NULL)
<<<<<<< HEAD
        {
            delete unit;
        }
=======
            {
                delete unit;
            }
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
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

