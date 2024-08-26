#ifndef ARTILLERYWOODLAND_H
#define ARTILLERYWOODLAND_H

#include "Artillery.h"

class ArtilleryWoodland : public Artillery {
public:
    ArtilleryWoodland() {
        // Custom attributes for Woodland Artillery
        attackPower = 90;
        defensePower = 50;
    }

    void move() {
        std::cout << "ArtilleryRiverbank rolling along the river's edge with caution.\n";
    }

    void attack() {
        std::cout << "ArtilleryRiverbank launching heavy bombardment from the Woodland.\n";
    }
    ~ArtilleryWoodland() noexcept override = default;

};

#endif  