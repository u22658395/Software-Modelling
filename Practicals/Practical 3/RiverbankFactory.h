#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "LegionFactory.h"
#include "InfantryRiverbank.h"
#include "CavalryRiverbank.h"
#include "ArtilleryRiverbank.h"

class RiverbankFactory : public LegionFactory {
public:
    RiverbankFactory(int initialBudget) : LegionFactory(initialBudget) {}


    Infantry* createInfantry() {
        return new InfantryRiverbank();
    }
    Cavalry* createCavalry() {
        // return new CavalryRiverbank();
        return new CavalryOpenField();
    }
    Artillery* createArtillery() {
        // return new ArtilleryRiverbank();
         return new ArtilleryOpenField();
        
    }
};
#endif
