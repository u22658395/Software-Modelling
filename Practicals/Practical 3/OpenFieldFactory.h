#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "InfantryOpenField.h"
#include "CavalryOpenField.h"
#include "ArtilleryOpenField.h"
#include "LegionFactory.h"

class OpenFieldFactory : LegionFactory {


public:
   OpenFieldFactory(int initialBudget) : LegionFactory(initialBudget) {}
	Infantry* createInfantry() {
        return new InfantryOpenField();
    }
    Cavalry* createCavalry() {
        return new CavalryOpenField();
    }
    Artillery* createArtillery() {
        return new ArtilleryOpenField();
    }
};


#endif
