#include "LegionUnit.h"

bool LegionUnit::isAlive() const {
    return health > 0;
}

void LegionUnit::takeDamage(int dmg) {
    health -= dmg;
}

int LegionUnit::getHealth() const {
    return health;
}

std::string LegionUnit::getName() const {
    return name;
}
void LegionUnit::setHealth(int h)
{
    if(h<0)
    {
        this->health=0;
    }
    else
    {
        this->health=h;
    }
}
void LegionUnit::setDamage(int d)
{
    damage=d;
}

