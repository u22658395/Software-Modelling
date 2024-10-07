#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "Infantry.h"
#include <string>


class InfantryFactory : public SoldierFactory {


public:
	InfantryFactory();
	Soldiers* createUnit();
	
};

#endif
