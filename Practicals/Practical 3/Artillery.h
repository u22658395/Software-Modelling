#ifndef ARTILLERY_H
#define ARTILLERY_H
#include <iostream>
#include <vector> 
#include "LegionUnit.h"


class Artillery : public LegionUnit{
private:
    // std::string name;
    std::vector<LegionUnit*> units;

public:
    Artillery() : LegionUnit(100, 20, "Artillery",100,100) {}

void move() {
    std::cout << " Artillery moves" << std::endl;
}

void attack() {
    std::cout << " Artillery attacks" << std::endl;
<<<<<<< HEAD
      std::cout << R"(
    ░░░░░░███████ ]▄▄▄▄▄▄▄▄
 ▂▄▅█████████▅▄▃▂        
[███████████████████]. 
◥⊙▲⊙▲⊙▲⊙▲⊙▲⊙▲⊙◤.. 
    )" << std::endl;
=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
}

    virtual ~Artillery()
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

