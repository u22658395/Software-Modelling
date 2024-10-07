#ifndef CAVALRYWOODLAND_H
#define CAVALRYWOODLAND_H

#include "Cavalry.h"

class CavalryWoodland : public Cavalry {
public:
    // CavalryWoodland() {
    //     // Custom attributes for Woodland Cavalry
    //     attackPower = 75;
    //     defensePower = 60;
    // }

    // void move() {
    //     std::cout << "CavalryWoodland moving swiftly through the woods.\n";
    // }

    // void attack() {
    //     std::cout << "CavalryWoodland launching a surprise attack from the trees.\n";
    // }
    ~CavalryWoodland() noexcept override = default;
};

#endif  // CAVALRYWOODLAND_H

