#include "Boatman.h"

#include<iostream>
using namespace std;

Boatman::Boatman(){
	this->healthPerSoldier = 100;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 100;
	this->amountOfSoldiersPerUnit = 10;
	this->unitName = "";
}
Boatman::Boatman(int value1, int value2, int value3, int value4, std::string value5) {
	this->healthPerSoldier = value1;
	this->damagePerSoldier = value2;
	this->defencePerSoldier = value3;
	this->amountOfSoldiersPerUnit = value4;
	this->unitName = value5;
}

Boatman* Boatman::clonis() {
	return new Boatman(this->healthPerSoldier,this->damagePerSoldier,this->defencePerSoldier,this->amountOfSoldiersPerUnit,this->unitName);
}

void Boatman::prepare(){
    cout << "Boatman Preparing...\n";
}

void Boatman::execute(){
    cout << "Boatman Executing...\n";
}

void Boatman::retreat(){
    cout << "Boatman Retreating...\n";
}

void Boatman::rest(){
    cout << "Boatman Resting...\n" ;
}
