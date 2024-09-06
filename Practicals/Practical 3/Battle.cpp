#include "Battle.h"
#include <iostream>

Battle::Battle() {
    tactic_= new TacticalCommand();
}

Battle::~Battle() {
    delete tactic_;
}

void Battle::addUnit(LegionUnit* unit) {
    units_.push_back(unit);
}

void Battle::removeUnit(LegionUnit* unit) {
    for (auto it = units_.begin(); it != units_.end(); ++it) {
        if (*it == unit) {
            units_.erase(it);
            break; // Exit the loop once the unit is found and removed
        }
    }
}


void Battle::setTactic(TacticalCommand* tactic) {
        if (tactic) {
        delete tactic_;
        tactic_ = tactic;
    }
}

void Battle::saveTactic(const std::string& label) {
    tactic_->saveCurrentStrategy(label);
}

void Battle::restoreTactic(const std::string& label) {
    tactic_->loadStrategy(label);
}

void Battle::displaySavedTactics() {
    std::cout << "Available tactics:" << std::endl;
    std::vector<std::string> labels;
    for (auto& entry : tactic_->getArchives()->getArchives()) {
        labels.push_back(entry.first);
    }
    for (const auto& label : labels) {
        std::cout << "- " << label << std::endl;
    }
}

void Battle::startBattle() {
    std::cout << "Battle started!" << std::endl;
    displayBattleInfo();
}

void Battle::updateBattle() {
    if (!tactic_) {
        std::cout << "No tactic set. Cannot continue battle." << std::endl;
        return;
    }
    

    std::cout << "Applying current tactic..." << std::endl;
    tactic_->executeStrategy(units_[0]); // Apply tactic to the first unit as an example
}

void Battle::endBattle() {
    std::cout << "Battle ended!" << std::endl;
}

void Battle::applyStrategy(LegionUnit* unit) {
    if(tactic_!=NULL|| unit!=NULL)
    tactic_->executeStrategy(unit);
}

void Battle::displayBattleInfo() {
     std::cout << "//////////////////////////////////////////////" << std::endl;
    std::cout << "Current battle status:" << std::endl;
    
    for (auto it = units_.begin(); it != units_.end(); ++it) {
        LegionUnit* unit = *it;  // Dereference the iterator to get the unit pointer
        std::cout << "Unit: " << unit->getName() << std::endl;
        std::cout << "Health: " << unit->getHealth() << std::endl;
        std::cout << "Alive: " << (unit->isAlive() ? "Yes" : "No") << std::endl;
    }

    std::cout << "//////////////////////////////////////////////" << std::endl;
}

