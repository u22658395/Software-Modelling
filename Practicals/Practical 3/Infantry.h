#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"

class Infantry : public LegionUnit {

public:
    Infantry() : LegionUnit(100, 20, "Infantry") {}

    void move();
    void attack();
    void applyStrategy(TacticalCommand* tacticalCommand) override
    {
        
    }
};

#endif

