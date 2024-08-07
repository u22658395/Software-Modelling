#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H
#include "Soldiers.h"
#include <string>
class ShieldBearer : public Soldiers {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
	ShieldBearer();
	ShieldBearer(int value1, int value2, int value3, int value4, std::string value5);
	ShieldBearer* clonis();
	void engage();
	void disengage();

private:
	void prepare();

	void execute();

	void retreat();

	void rest();
};

#endif
