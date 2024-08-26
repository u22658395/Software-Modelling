#ifndef COUNTRY_H
#define COUNTRY_H
#include "Boatman.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"
#include "Infantry.h"
#include "InfantryFactory.h"
#include "Memento.h"
#include "ShieldBearer.h"
#include "ShieldBearerFactory.h"
#include "SoldierFactory.h"
#include "Soldiers.h"
#include<iostream>
using namespace std;

class Country{
    int losses;
    string countryName;
    Soldiers* infantry;
    Soldiers* shieldBearer;
    Soldiers* boatman;
    CareTaker* infantryCaretaker= new CareTaker();
    CareTaker* boatmanCaretaker= new CareTaker();
    CareTaker* shieldCaretaker= new CareTaker();
    Country();
    Country(Soldiers*,Soldiers*,Soldiers*, string name);

    bool fight(Country*);
};

#endif