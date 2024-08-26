#include "InfantryFactory.h"
#include<iostream>
using namespace std;

InfantryFactory::InfantryFactory()
{
	soldiers = new Infantry();
}

Soldiers* InfantryFactory::createUnit() {
	soldiers->setStrength(calculateStrength());
	return soldiers->clonis();
}
