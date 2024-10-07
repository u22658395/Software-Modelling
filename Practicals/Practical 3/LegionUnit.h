#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

#include <string>
#include <iostream>
#include "UnitComponent.h"
// #include "TacticalCommand.h"

class TacticalCommand;

class LegionUnit : UnitComponent{
protected:
    int health;
    int damage;
    std::string name;
    

public:
    int attackPower;
    int defensePower;
    // LegionUnit();
    LegionUnit(int hp, int dmg, const std::string& unitName,int attack,int defence)
        : health(hp), damage(dmg), name(unitName), attackPower(attack),defensePower(defence){}

    void applyStrategy(TacticalCommand* tacticalCommand);
<<<<<<< HEAD
    bool isAlive();
=======
    bool isAlive() const;
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    void takeDamage(int dmg);
    int getHealth() const;
    std::string getName() const;

    virtual ~LegionUnit() ;
    virtual void move() override=0;
    virtual void attack() override=0;
    virtual void add(LegionUnit* component){};
    virtual void remove(LegionUnit* component){};
};

#endif


