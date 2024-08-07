#ifndef SOLDIERS_H
#define SOLDIERS_H
#include "Memento.h"

class Soldiers {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

public:
	virtual Soldiers* clonis() = 0;

	virtual void engage();
	virtual void disengage();

private:
	virtual void prepare() = 0;

	virtual void execute() = 0;

	virtual void retreat() = 0;

	virtual void rest() = 0;

public:
	Memento* militusMemento();
	void vivificaMemento(Memento* mem);
	int getHealthPerSoldier();
	int getDamagePerSoldier();
	int getDefencePerSoldier();
	int getAmountOfSoldiersPerUnit();
	std::string getUnitName();
};

#endif
