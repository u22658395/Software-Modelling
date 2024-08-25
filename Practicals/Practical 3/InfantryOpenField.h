#ifndef CAVALRYRIVERBANK_H
#define CAVALRYRIVERBANK_H

#include "Infantry.h"

class InfantryOpenField : public Infantry {
public:
    InfantryOpenField() {
        // Custom attributes for Riverbank Cavalry
        attackPower = 70;
        defensePower = 65;
    }

    void move() {
        std::cout << "CavalryRiverbank navigating through the river's edge.\n";
    }

    void attack() {
        std::cout << "CavalryRiverbank charging along the riverbank with great force.\n";
    }
};

#endif  // CAVALRYRIVERBANK_H
