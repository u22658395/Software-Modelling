#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "InfantryWoodland.h"
#include "CavalryWoodland.h"
#include "ArtilleryWoodland.h"

class WoodlandFactory : public LegionFactory {
public:
WoodlandFactory(int initialBudget) : LegionFactory(initialBudget) {}
    Infantry* createInfantry() {
        return new InfantryWoodland();
    }
    Cavalry* createCavalry() {
        return new CavalryWoodland();
    }
    Artillery* createArtillery() {
        return new ArtilleryWoodland();
    }
};

#endif
