#include "Soldiers.h"
#include <iostream>
using namespace std;

void Soldiers::engage(Soldiers* s){
	prepare();

	execute(s);

	cout << "healthPerSoldier: " << s->getHealthPerSoldier() << endl;
	cout << "damagePerSoldier: " << s->getDamagePerSoldier() << endl;
	cout << "defencePerSoldier: " << s->getDefencePerSoldier() << endl;
	cout << "amountOfSoldiersPerUnit: " << s->getAmountOfSoldiersPerUnit() << endl;
	cout << "unitName: " << s->getUnitName() <<endl;
	cout << "unitStrength: " << s->getUnitStrength() << endl << endl;
	// if(s->lose())
	// {
	// 	cout<< this->unitName<< " has lost"<<endl;
	// 	return;
	// }

	// if(this->lose())
	// {
	
	// }
	// if(s->lose())
	// {
	// 	cout<< s->getUnitName()<< " has lost"<<endl;
	// }

}
int Soldiers:: getUnitStrength(){
	if(unitStrength>=0)
	{
		return unitStrength;
	}
	else
	{
		return 0;
	}
}


void Soldiers::disengage(Memento* m){
	if(!lose())
	{
		rest(m);
	}

	else
	{
		std:: cout<<this->unitName<<" has lost";
		retreat();
	}
}
void Soldiers:: decrease()
{
	int olddefence=defencePerSoldier;
	int oldDamage= damagePerSoldier;
	int amount= amountOfSoldiersPerUnit;

	damagePerSoldier=rand() % (101 - oldDamage) + oldDamage;
	healthPerSoldier= 100-damagePerSoldier ;
	amountOfSoldiersPerUnit= rand()% amount;
	defencePerSoldier=rand() % olddefence;
	unitStrength=healthPerSoldier+defencePerSoldier-damagePerSoldier;
}

void Soldiers:: setStrength(int s)
{

	if(s>=0)
		this->unitStrength=s;

	else
		unitStrength=0;

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

bool Soldiers:: lose()
{

	if(unitStrength<=0 || amountOfSoldiersPerUnit<=0)
	{
		// cout<< this->unitName<< " has lost"<<endl;
		return true;
		
	}
	return false;


}
