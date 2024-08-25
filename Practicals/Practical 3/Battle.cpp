// #include "Battle.h"
// #include "TacticalPlanner.h"
// #include "WarArchives.h"
// #include "CavalryRiverbank.h"
// #include <iostream>

// Battle::Battle() {
//     // Initialize TacticalPlanner and WarArchives
//     planner = new TacticalPlanner();
//     archives = new WarArchives();
// }

// Battle::~Battle() {
//     delete planner;
//     delete archives;
// }

// void Battle::simulateCombat(std::vector<LegionUnit*>& playerUnits, std::vector<LegionUnit*>& aiUnits) {
//     std::cout << "Battle begins!" << std::endl;

//     // Retrieve previous strategy if available
//     // TacticalMemento* memento = archives->getTacticalMemento("LastBattle");
//     // if (memento) {
//     //     planner->restoreMemento(memento);
//     //     std::cout << "Previous strategy loaded for this battle.\n";
//     // }

//     while (!playerUnits.empty() && !aiUnits.empty()) {
//         // Example strategy usage - adapt based on your game logic
//         if (planner->getCurrentStrategy()) {
//             planner->getCurrentStrategy()->engage(playerUnits.back());
//         }

//         // Player units attack AI units
//         for (auto playerUnit : playerUnits) {
//             if (!aiUnits.empty()) {
//                 LegionUnit* target = aiUnits.back();
//                 playerUnit->attack();  // Use the unit's attack method
//                 target->takeDamage(playerUnit->getHealth());
//                 std::cout << playerUnit->getName() << " attacks " << target->getName() << "!" << std::endl;

//                 if (!target->isAlive()) {
//                     std::cout << target->getName() << " is defeated!" << std::endl;
//                     aiUnits.pop_back();
//                 }
//             }
//         }

//         // AI units attack Player units
//         for (auto aiUnit : aiUnits) {
//             if (!playerUnits.empty()) {
//                 LegionUnit* target = playerUnits.back();
//                 aiUnit->attack();  // Use the unit's attack method
//                 target->takeDamage(aiUnit->getHealth());
//                 std::cout << aiUnit->getName() << " attacks " << target->getName() << "!" << std::endl;

//                 if (!target->isAlive()) {
//                     std::cout << target->getName() << " is defeated!" << std::endl;
//                     playerUnits.pop_back();
//                 }
//             }
//         }
//     }

//     if (playerUnits.empty()) {
//         std::cout << "Player has lost the battle!" << std::endl;
//     } else {
//         std::cout << "Player has won the battle!" << std::endl;

//         // Save the winning strategy for future battles
//         TacticalMemento* newMemento = planner->createMemento();
//         archives->addTacticalMemento("LastBattle", newMemento);
//     }
// }
