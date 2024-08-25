#ifndef FORTIFICATION_H
#define FORTIFICATION_H
#include "BattleStrategy.h";
#include "LegionUnit.h";

class Fortification : public BattleStrategy {
    public:
        void engage(LegionUnit* unit){
        std::cout << "Fortifying positions with " << unit->getName() << std::endl;
    }
    BattleStrategy* clone() const override {
        return new Fortification(*this);
    }
};

#endif
