#include "Battle.h"
#include "OpenFieldFactory.h"
#include "Ambush.h"
#include "LegionUnit.h"
#include "TacticalCommand.h"
#include "WarArchives.h"
#include <vector>

int main() {
    // Create the LegionFactory for Open Field units
    OpenFieldFactory*OF= new OpenFieldFactory(1500);

    // Create player and AI units using the factory
    std::vector<LegionUnit*> playerUnits;
    std::vector<LegionUnit*> aiUnits;

    playerUnits.push_back(OF->createInfantry());
    playerUnits.push_back(OF->createCavalry());
    playerUnits.push_back(OF->createArtillery());

    aiUnits.push_back(OF->createInfantry());
    aiUnits.push_back(OF->createCavalry());
    aiUnits.push_back(OF->createArtillery());

    // Set up the battle simulation
    TacticalCommand commands;
    Battle battle;

    // Set an initial strategy for the player
     commands.setStrategy(new Ambush());
     commands.saveCurrentStrategy("Player Ambush Strategy");

    // Simulate the battle
    battle.simulateCombat(playerUnits, aiUnits);

    // Load a previous strategy
     commands.loadStrategy("Player Ambush Strategy");

    // Clean up allocated units
    for (auto unit : playerUnits) delete unit;
    for (auto unit : aiUnits) delete unit;

    return 0;
}
