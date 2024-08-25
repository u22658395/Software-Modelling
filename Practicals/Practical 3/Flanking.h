#ifndef FLANKING_H
#define FLANKING_H
#include "BattleStrategy.h";

class Flanking :public  BattleStrategy {
    public:

        void engage(LegionUnit* unit)
        {
        std::cout << "Executing flanking maneuver with " << unit->getName() << std::endl;
        }
        BattleStrategy* clone()const override{
        return new Flanking(*this);
    }

};

#endif
