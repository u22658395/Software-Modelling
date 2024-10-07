#ifndef SOLDIERS_H
#define SOLDIERS_H
#include "Memento.h"
#include<string>
using namespace std;

class Memento;
class Soldiers {

protected:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	int unitStrength=0;
	string unitName;
	virtual void prepare() = 0;
	virtual void execute(Soldiers*) = 0;
	virtual void retreat() = 0;
	virtual void rest(Memento* m) = 0;

public:
	bool lose();
	virtual Soldiers* clonis() = 0;
	virtual void engage(Soldiers*);
	virtual void disengage(Memento*);
	Memento* militusMemento();
	void vivificaMemento(Memento*);
	void decrease();
	int getHealthPerSoldier();
	int getDamagePerSoldier();
	int getDefencePerSoldier();
	int getAmountOfSoldiersPerUnit();
	int  getUnitStrength();
	std::string getUnitName();
	void setStrength(int strength);
};

#endif
