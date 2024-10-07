#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
#include <vector> 
#include "LegionUnit.h"


class Infantry : public LegionUnit {
private:
    std::vector<LegionUnit*> units;

public:
   Infantry()  : LegionUnit(100, 20, "Infantry",100,100) {}

    void move(){
        std::cout << "Infantry moves" << std::endl;
    }

    void attack() {
        std::cout << "Infantry attacks" << std::endl;
    }

    ~Infantry() {
        for (auto unit : units) {
            if(unit!=NULL)
            {
                delete unit;
            }
        }
        units.clear();
    }

    void add(LegionUnit* component) {
        units.push_back(component);
    }

    void remove(LegionUnit* component) {
        for (auto it = units.begin(); it != units.end(); ++it) {
            if (*it == component) {
                units.erase(it);
                break;
            }
        }
    }
};

#endif // INFANTRY_H
