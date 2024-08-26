#ifndef CAVALRYRIVERBANK_H
#define CAVALRYRIVERBANK_H

#include "Cavalry.h"

class CavalryRiverbank : public Cavalry {
public:
    CavalryRiverbank() {
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
    ~CavalryRiverbank() noexcept override = default;
};

#endif  // CAVALRYRIVERBANK_H
