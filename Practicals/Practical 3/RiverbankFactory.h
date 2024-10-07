#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "LegionFactory.h"
#include "InfantryRiverbank.h"
#include "CavalryRiverbank.h"
#include "ArtilleryRiverbank.h"

class RiverbankFactory : public LegionFactory {
public:
    RiverbankFactory(int initialBudget) : LegionFactory(initialBudget) {}


<<<<<<< HEAD
    Infantry* createInfantry() {
        return new InfantryRiverbank();
    }
    Cavalry* createCavalry() {
        // return new CavalryRiverbank();
        return new CavalryOpenField();
    }
    Artillery* createArtillery() {
=======
    LegionUnit* createInfantry() {
        return new InfantryRiverbank();
    }
    LegionUnit* createCavalry() {
        // return new CavalryRiverbank();
        return new CavalryOpenField();
    }
    LegionUnit* createArtillery() {
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
        // return new ArtilleryRiverbank();
         return new ArtilleryOpenField();
        
    }
};
#endif
