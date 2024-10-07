#ifndef AMBUSH_H
#define AMBUSH_H
#include "BattleStrategy.h"
#include "LegionUnit.h"
#include <cstdlib>
#include"Infantry.h"
#include"Artillery.h"
#include"Cavalry.h"

class Ambush : public BattleStrategy {

   public: 
   void engage(LegionUnit* unit)override{
        std::cout << "Setting up an ambush with " << unit->getName()<< std::endl;
        unit->takeDamage(std::rand() % 101);
              
        
    }
    BattleStrategy* clone() const override {
        return new Ambush(*this);
    }
};

#endif
