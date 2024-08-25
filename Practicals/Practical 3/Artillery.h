#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"

class Artillery : public LegionUnit {
public:
    Artillery() : LegionUnit(100, 20, "Artillery") {}

    void move() override;
    void attack() override;
    void applyStrategy(TacticalCommand* tacticalCommand) override
    {
        
    }
};

#endif

