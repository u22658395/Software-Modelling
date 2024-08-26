#ifndef SOLDIERFACTORY_CPP
#define SOLDIERFACTORY_CPP
#include "SoldierFactory.h"


int SoldierFactory::calculateTotalHealthPerUnit() {
	return soldiers->getHealthPerSoldier()*soldiers->getAmountOfSoldiersPerUnit();
}

int SoldierFactory::calculateTotalDamagePerUnit() {
    return soldiers->getDamagePerSoldier()*soldiers->getAmountOfSoldiersPerUnit();
}

int SoldierFactory::calculateTotalDefencePerUnit() {
	return soldiers->getDefencePerSoldier()*soldiers->getAmountOfSoldiersPerUnit();
}
int SoldierFactory::calculateStrength()
{
	return calculateTotalHealthPerUnit()-calculateTotalDamagePerUnit()+calculateTotalDefencePerUnit();
}


SoldierFactory::~SoldierFactory(){
	delete soldiers;
	soldiers = NULL;
}

#endif