#include "LegionUnit.h"
#include "TacticalCommand.h"


bool LegionUnit::isAlive() const {
    return health > 0;
}

void LegionUnit::takeDamage(int dmg) {
    health -= dmg;
    defensePower=damage;
    attackPower=health;
    damage=dmg;
}

int LegionUnit::getHealth() const {
    return health;
}

std::string LegionUnit::getName() const {
    return name;
}

void LegionUnit::applyStrategy(TacticalCommand* tacticalCommand) {
    std::cout << name << " applying strategy: ";
    tacticalCommand->executeStrategy(this);
}


LegionUnit::~LegionUnit() {
}


