#ifndef ARTILLERYRIVERBANK_H
#define ARTILLERYRIVERBANK_H

#include "Artillery.h"

class ArtilleryOpenField : public Artillery {
public:
    ArtilleryOpenField() {
        // Custom attributes for Riverbank Artillery
        attackPower = 90;
        defensePower = 50;
    }

    void move() {
        std::cout << "ArtilleryRiverbank rolling along the river's edge with caution.\n";
    }

    void attack() {
        std::cout << "ArtilleryRiverbank launching heavy bombardment from the riverbank.\n";
    }
    ~ArtilleryOpenField() noexcept override = default;

};

#endif  // ARTILLERYRIVERBANK_H

