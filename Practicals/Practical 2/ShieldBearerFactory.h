#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "ShieldBearer.h"
class ShieldBearerFactory : public SoldierFactory {


public:
	int calculateTotalHealthPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();

	Soldiers* createUnit();
};

#endif
