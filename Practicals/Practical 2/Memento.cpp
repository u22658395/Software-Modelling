#include "Memento.h"


Memento::Memento(int value1, int value2, int value3, int value4, std::string value5) {
	this->healthPerSoldier = value1;
	this->damagePerSoldier = value2;
	this->defencePerSoldier = value3;
	this->amountOfSoldiersPerUnit = value4;
	this->unitName = value5;
}

int Memento::getHealthPerSoldier(){
	return healthPerSoldier;
}

int Memento::getDamagePerSoldier(){
	return damagePerSoldier;
}

int Memento::getDefencePerSoldier(){
	return defencePerSoldier;
}

int Memento::getAmountOfSoldiersPerUnit(){
	return amountOfSoldiersPerUnit;
}

std::string Memento::getUnitName(){
	return unitName;
}

