#ifndef BATTLE_H
#define BATTLE_H

#include "LegionUnit.h"
#include "TacticalCommand.h"
#include "Ambush.h"
#include <vector>
#include <iostream>

class Battle {
public:
    TacticalCommand tacticalCommand;

    void simulateCombat(std::vector<LegionUnit*>& playerUnits, std::vector<LegionUnit*>& aiUnits) {
        std::cout << "Starting battle simulation...\n";

        // Engage player units with their strategy
        for (auto unit : playerUnits) {
            tacticalCommand.executeStrategy(unit);
            unit->attack();
        }

        // Engage AI units with a different strategy
        tacticalCommand.setStrategy(new Ambush());
        for (auto unit : aiUnits) {
            tacticalCommand.executeStrategy(unit);
            unit->attack();
        }

        std::cout << "Battle simulation completed.\n";
    }
};

#endif
