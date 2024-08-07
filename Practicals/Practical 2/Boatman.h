#ifndef BOATMAN_H
#define BOATMAN_H
#include "Soldiers.h"
#include <string>
class Boatman : public Soldiers {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
	Boatman();
	Boatman(int value1, int value2, int value3, int value4, std::string value5);
	Boatman* clonis();
	void engage();

	void disengage();

private:
	void prepare();

	void execute();

	void retreat();

	void rest();
};

#endif
