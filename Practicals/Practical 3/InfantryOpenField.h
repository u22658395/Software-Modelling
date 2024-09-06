#ifndef CAVALRYRIVERBANK_H
#define CAVALRYRIVERBANK_H

#include "Infantry.h"

class InfantryOpenField : public Infantry {
public:
    // InfantryOpenField() {
    //     // Custom attributes for Riverbank Cavalry
    //     attackPower = 70;
    //     defensePower = 65;
    // }

//     void move() {
//         std::cout << "CavalryRiverbank navigating through the river's edge.\n";
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
    ~InfantryOpenField() noexcept override = default;
};

#endif  // CAVALRYRIVERBANK_H
