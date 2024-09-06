#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
#include <cstdlib>
#include"Infantry.h"
#include"Artillery.h"
#include"Cavalry.h"

class Fortification : public BattleStrategy {
public:
    void engage(LegionUnit* unit) override {
        std::cout << "Fortifying positions with " << unit->getName() << std::endl;
        unit->takeDamage(std::rand() % 101);
    }

    BattleStrategy* clone() const override {
        return new Fortification(*this);
    }
};

#endif // FORTIFICATION_H
