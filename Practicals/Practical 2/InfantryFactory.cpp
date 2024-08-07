#include "InfantryFactory.h"

int InfantryFactory::calculateTotalHealthPerUnit() {
	return soldiers->getHealthPerSoldier()*soldiers->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculateTotalDamagePerUnit() {
	// TODO - implement InfantryFactory::calculateTotalDamagePerUnit
	throw "Not yet implemented";
}

int InfantryFactory::calculateTotalDefencePerUnit() {
	// TODO - implement InfantryFactory::calculateTotalDefencePerUnit
	throw "Not yet implemented";
}

Soldiers* InfantryFactory::createUnit() {
	return new Infantry();
}
