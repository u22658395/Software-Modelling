#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Boatman.h"
#include <string>

class BoatmanFactory : public SoldierFactory {


public:
	int calculateTotalHealthPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();

	Soldiers* createUnit();
};

#endif
