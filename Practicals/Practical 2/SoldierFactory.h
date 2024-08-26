#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class Soldiers;
class SoldierFactory {

protected:
	Soldiers* soldiers;
	int calculateTotalHealthPerUnit();
	int calculateTotalDamagePerUnit();
	int calculateTotalDefencePerUnit();
	int calculateStrength();

public:
	virtual Soldiers* createUnit() = 0;
	~SoldierFactory();
};

#endif
