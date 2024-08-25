#ifndef AMBUSH_H
#define AMBUSH_H
#include "BattleStrategy.h"
#include "LegionUnit.h"

class Ambush : public BattleStrategy {

   public: 
   void engage(LegionUnit* unit){
        std::cout << "Setting up an ambush with " << unit->getName() << std::endl;
        unit->setHealth(5);
        
    }
    BattleStrategy* clone() const override {
        return new Ambush(*this);
    }
};

#endif
