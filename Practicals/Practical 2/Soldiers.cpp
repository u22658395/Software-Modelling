#include "Soldiers.h"

void Soldiers::engage(){
	prepare();
	execute();
}

void Soldiers::disengage(){
	retreat();
	rest();
}


Memento* Soldiers::militusMemento() {
	return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
	// TODO - implement Soldiers::vivificaMement
	if(mem != nullptr){
		this->healthPerSoldier = mem->getHealthPerSoldier();
		this->damagePerSoldier = mem->getDamagePerSoldier();
		this->defencePerSoldier = mem->getDefencePerSoldier();
		this->amountOfSoldiersPerUnit = mem->getAmountOfSoldiersPerUnit();
		this->unitName = mem->getUnitName();
	}
}
int Soldiers::getHealthPerSoldier(){
	return healthPerSoldier;
}

int Soldiers::getDamagePerSoldier(){
	return damagePerSoldier;
}

int Soldiers::getDefencePerSoldier(){
	return defencePerSoldier;
}

int Soldiers::getAmountOfSoldiersPerUnit(){
	return amountOfSoldiersPerUnit;
}

std::string Soldiers::getUnitName(){
	return unitName;
}
