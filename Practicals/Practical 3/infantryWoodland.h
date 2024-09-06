#ifndef INFANTRYWOODLAND_H
#define INFANTRYWOODLAND_H
#include "Infantry.h"

class InfantryWoodland : public Infantry {
    public:
    // InfantryWoodland() {
    //     // Custom attributes for Woodland Infantry
    //     attackPower = 90;
    //     defensePower = 50;
    // }

//     void move() {
//         std::cout << "InfantryWoodland  rolling along the river's edge with caution.\n";
//     }

//     void attack() {
//         std::cout << "Infantry attacks" << std::endl;
//           std::cout << R"(
// _/﹋\_
// (҂`_´)
// <,︻╦╤─ ҉ - -
// _/﹋\_
//     )" << std::endl;
//     }
    ~InfantryWoodland() noexcept override = default;
    
   
};

#endif
