#include "Boatman.h"

#include<iostream>
using namespace std;

Boatman::Boatman(){
	this->healthPerSoldier = 100;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 100;
	this->amountOfSoldiersPerUnit = 10;
	this->unitName = "Boatman";
}
Boatman::Boatman(int healthPerSoldier, int damagePerSoldier, int defencePerSoldier, int amountOfSoldiersPerUnit, std::string unitName,int value6) {
	this->healthPerSoldier = healthPerSoldier;
	this->damagePerSoldier = damagePerSoldier;
	this->defencePerSoldier = defencePerSoldier;
	this->amountOfSoldiersPerUnit = amountOfSoldiersPerUnit;
	this->unitName = unitName;
	this->unitStrength=value6;
}

Boatman* Boatman::clonis() {
	return new Boatman(this->healthPerSoldier,this->damagePerSoldier,this->defencePerSoldier,this->amountOfSoldiersPerUnit,this->unitName,this->unitStrength);
}

void Boatman::prepare(){
    cout << "Boatman Preparing...\n";
}

void Boatman::execute(Soldiers* s){
    cout << "Boatman Executing...\n";
		s->decrease();
}

void Boatman::retreat(){
    cout << "Boatman Retreating...\n";
}

void Boatman::rest(Memento* m){
    cout << "Boatman Resting...\n" ;
	vivificaMemento(m);
}

Boatman::~Boatman(){
	
}
