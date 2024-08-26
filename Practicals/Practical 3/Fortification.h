#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
#include "LegionUnit.h"
#include <cstdlib>

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
