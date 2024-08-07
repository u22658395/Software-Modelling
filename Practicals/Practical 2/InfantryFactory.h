#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Infantry.h"
#include <string>


class InfantryFactory : public SoldierFactory {

private: 
	Soldiers* soldiers;
public:
	int calculateTotalHealthPerUnit();

	int calculateTotalDamagePerUnit();

	int calculateTotalDefencePerUnit();

	Soldiers* createUnit();
};

#endif
