#include <iostream>
#include "LegionFactory.h"
#include "WoodlandFactory.h"
#include "Battle.h"
#include "LegionUnit.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
// Add other necessary headers


int main() {
    WoodlandFactory woodlandFactory(1000);

    Battle* battle = new Battle();

    // Create units
    Infantry* infantry = woodlandFactory.createInfantry();
    Cavalry* cavalry = woodlandFactory.createCavalry();
    Artillery* artillery = woodlandFactory.createArtillery();

    battle->addUnit(infantry);
    battle->addUnit(cavalry);
    battle->addUnit(artillery);

    // Set initial tactic
    // BattleStrategy* fortification = new Fortification();
    // battle->setTactic(fortification);

    // Start battle
    battle->startBattle();

    // Engage units
    battle->applyStrategy(infantry);

    // Save tactic
    battle->saveTactic("Fortified Position");

    // Restore tactic
    battle->restoreTactic("Fortified Position");
    battle->applyStrategy(infantry);

    // Clean up
    delete infantry;
    delete cavalry;
    delete artillery;
    // delete fortification;

    return 0;
}
