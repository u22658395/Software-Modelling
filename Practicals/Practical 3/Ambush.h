#ifndef AMBUSH_H
#define AMBUSH_H
#include "BattleStrategy.h"
#include "LegionUnit.h"
#include <cstdlib>

class Ambush : public BattleStrategy {

   public: 
   void engage(LegionUnit* unit){
        std::cout << "Setting up an ambush with " << unit->getName() << std::endl;
        unit->takeDamage(std::rand() % 101);
        
    }
    BattleStrategy* clone() const override {
        return new Ambush(*this);
    }
};

#endif
