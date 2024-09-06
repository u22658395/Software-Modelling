#ifndef FLANKING_H
#define FLANKING_H
#include "BattleStrategy.h"
#include <cstdlib>
#include"Infantry.h"
#include"Artillery.h"
#include"Cavalry.h"

class Flanking :public  BattleStrategy {
    public:

        void engage(LegionUnit* unit)
        {
        std::cout << "Executing flanking maneuver with " << unit->getName() << std::endl;
        unit->takeDamage(std::rand() % 101);
        }
        
        BattleStrategy* clone()const override{
        return new Flanking(*this);
    }

};

#endif
