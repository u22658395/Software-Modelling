#ifndef MEMENTO_H
#define MEMENTO_H

#include "SoldierFactory.h"
#include <string>
class Memento {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
	Memento(int value1, int value2, int value3, int value4, std::string value5);
	int getHealthPerSoldier();
	int getDamagePerSoldier();
	int getDefencePerSoldier();
	int getAmountOfSoldiersPerUnit();
	std::string getUnitName();
};

#endif
