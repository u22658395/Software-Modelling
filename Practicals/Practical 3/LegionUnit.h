#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

#include <string>
#include <iostream>
#include "UnitComponent.h"
#include "TacticalCommand.h"

class TacticalCommand;

class LegionUnit : public UnitComponent {
protected:
    int health;
    int damage;
    std::string name;
    

public:
    int attackPower;
    int defensePower;
    LegionUnit(int hp, int dmg, const std::string& unitName)
        : health(hp), damage(dmg), name(unitName) {}

    virtual void applyStrategy(TacticalCommand* tacticalCommand);
    bool isAlive() const;
    void takeDamage(int dmg);
    int getHealth() const;
    std::string getName() const;
    void setHealth(int h);
    void setDamage(int d);

    virtual ~LegionUnit() ;
};

#endif


