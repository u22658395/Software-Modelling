#include "Infantry.h"

#include<iostream>
using namespace std;

Infantry::Infantry(){
	this->healthPerSoldier = 100;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 100;
	this->amountOfSoldiersPerUnit = 10;
	this->unitName = "";
}

Infantry::Infantry(int value1, int value2, int value3, int value4, std::string value5) {
	this->healthPerSoldier = value1;
	this->damagePerSoldier = value2;
	this->defencePerSoldier = value3;
	this->amountOfSoldiersPerUnit = value4;
	this->unitName = value5;
}

Infantry* Infantry::clonis() {
	return new Infantry(this->healthPerSoldier,this->damagePerSoldier,this->defencePerSoldier,this->amountOfSoldiersPerUnit,this->unitName);
}

void Infantry::prepare(){
    cout << "Infantry Preparing...\n";
}

void Infantry::execute(){
    cout << "Infantry Executing...\n";
}

void Infantry::retreat(){
    cout << "Infantry Retreating...\n";
}

void Infantry::rest(){
    cout << "Infantry Resting...\n" ;
}
