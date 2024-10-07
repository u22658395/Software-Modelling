#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "InfantryWoodland.h"
#include "CavalryWoodland.h"
#include "ArtilleryWoodland.h"

class WoodlandFactory : public LegionFactory {
public:
WoodlandFactory(int initialBudget) : LegionFactory(initialBudget) {}
    LegionUnit* createInfantry() {
        return new InfantryWoodland();
    }
    LegionUnit* createCavalry() {
        return new CavalryWoodland();
    }
    LegionUnit* createArtillery() {
        return new ArtilleryWoodland();
    }
};

#endif
