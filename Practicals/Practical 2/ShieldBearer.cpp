#include "ShieldBearer.h"

#include<iostream>
using namespace std;

ShieldBearer::ShieldBearer(){
	this->healthPerSoldier = 100;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 100;
	this->amountOfSoldiersPerUnit = 10;
	this->unitName = "ShieldBearer";
}
ShieldBearer::ShieldBearer(int value1, int value2, int value3, int value4, std::string value5,int value6) {
	this->healthPerSoldier = value1;
	this->damagePerSoldier = value2;
	this->defencePerSoldier = value3;
	this->amountOfSoldiersPerUnit = value4;
	this->unitName = value5;
	this->unitStrength=value6;
}

ShieldBearer* ShieldBearer::clonis() {
	return new ShieldBearer(this->healthPerSoldier,this->damagePerSoldier,this->defencePerSoldier,this->amountOfSoldiersPerUnit,this->unitName,this->unitStrength);
}

void ShieldBearer::prepare(){
    cout << "ShieldBearer Preparing...\n";
}

void ShieldBearer::execute(Soldiers*s){
    cout << "ShieldBearer Executing...\n";
		s->decrease();
}

void ShieldBearer::retreat(){
    cout << "ShieldBearer Retreating...\n";
}

void ShieldBearer::rest(Memento* m){
    cout << "ShieldBearer Resting...\n" ;
	vivificaMemento(m);

}

