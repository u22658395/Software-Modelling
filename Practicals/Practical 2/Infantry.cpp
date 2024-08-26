#include "Infantry.h"
#include <cstdlib>
#include<iostream>
using namespace std;

Infantry::Infantry(){
	this->healthPerSoldier = 100;
	this->damagePerSoldier = 0;
	this->defencePerSoldier = 100;
	this->amountOfSoldiersPerUnit = 10;
	this->unitName = "Infantry";
}

Infantry::Infantry(int value1, int value2, int value3, int value4, std::string value5,int value6) {
	this->healthPerSoldier = value1;
	this->damagePerSoldier = value2;
	this->defencePerSoldier = value3;
	this->amountOfSoldiersPerUnit = value4;
	this->unitName = value5;
	this->unitStrength = value6;
}

Infantry* Infantry::clonis() {
	return new Infantry(this->healthPerSoldier,this->damagePerSoldier,this->defencePerSoldier,this->amountOfSoldiersPerUnit,this->unitName,this->unitStrength);
}

void Infantry::prepare(){
    cout << "Infantry Preparing...\n";
}

void Infantry::execute(Soldiers* s){
    cout << "Infantry Executing...\n";
	s->decrease();

}


void Infantry::retreat(){
    cout << "Infantry Retreating...\n";
}

void Infantry::rest(Memento* m){
    cout << "Infantry Resting...\n" ;
	vivificaMemento(m);
}
