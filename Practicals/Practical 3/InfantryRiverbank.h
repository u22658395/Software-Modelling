#ifndef INFANTRYRIVERBANK_H
#define INFANTRYRIVERBANK_H
#include "Infantry.h"

class InfantryRiverbank : public Infantry {
    public:
    // InfantryRiverbank() {
    //     // Custom attributes for Riverbank Cavalry
    //     attackPower = 70;
    //     defensePower = 65;
    // }

//     void move() {
//         std::cout << "InfantryRiverbank navigating through the river's edge.\n";
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
    ~InfantryRiverbank() noexcept override = default;
};

#endif
