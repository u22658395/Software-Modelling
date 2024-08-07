#ifndef BOATMAN2_H
#define BOATMAN2_H

#include "Soldiers.h"
#include <string>

class Boatman2 {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
	virtual Boatman2* clonis() = 0;

	virtual int calculateTotalHealthPerUnit() = 0;

	virtual int calculateTotalDamagePerUnit() = 0;

private:
	virtual void prepare() = 0;

	virtual void execute() = 0;

	virtual void retreat() = 0;

	virtual void rest() = 0;
};

#endif
