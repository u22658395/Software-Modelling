#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "LegionFactory.h"
#include "InfantryRiverbank.h"
#include "CavalryRiverbank.h"
#include "ArtilleryRiverbank.h"

class RiverbankFactory : public LegionFactory {
public:
    RiverbankFactory(int initialBudget) : LegionFactory(initialBudget) {}


    LegionUnit* createInfantry() {
        return new InfantryRiverbank();
    }
    LegionUnit* createCavalry() {
        // return new CavalryRiverbank();
        return new CavalryOpenField();
    }
    LegionUnit* createArtillery() {
        // return new ArtilleryRiverbank();
         return new ArtilleryOpenField();
        
    }
};
#endif
