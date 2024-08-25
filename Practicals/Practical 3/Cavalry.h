#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"

class Cavalry : public LegionUnit {
public:
    Cavalry() : LegionUnit(100, 20, "Cavalry") {}

    void move();
    void attack();
    void applyStrategy(TacticalCommand* tacticalCommand) override
    {
        
    }
};

#endif

