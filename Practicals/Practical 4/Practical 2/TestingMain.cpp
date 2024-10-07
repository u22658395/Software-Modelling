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

int main()
{

    InfantryFactory* infantryFactory = new InfantryFactory();
    ShieldBearerFactory* shieldFactory = new ShieldBearerFactory();
    BoatmanFactory* boatFactory = new BoatmanFactory();

    Soldiers* infSoldier = infantryFactory->createUnit();
    Soldiers* infSoldier1 = infantryFactory->createUnit();
    Soldiers* shieldSoldier = shieldFactory->createUnit();
    Soldiers* shieldSoldier1 = shieldFactory->createUnit();
    Soldiers* boatSoldier = boatFactory->createUnit();
    Soldiers* boatSoldier1 = boatFactory->createUnit();
    
    CareTaker* infCaretaker= new CareTaker();
    CareTaker* inf1Caretaker= new CareTaker();
    CareTaker* shieldCaretaker= new CareTaker();
    CareTaker* shield1Caretaker= new CareTaker();
    CareTaker* boatCaretaker= new CareTaker();
    CareTaker* boat1Caretaker= new CareTaker();
    int counter = 0, counter2 = 0;

    while(true)
    {
        infCaretaker->addMemento( infSoldier->militusMemento());
        inf1Caretaker->addMemento( infSoldier1->militusMemento());
        boatCaretaker->addMemento( boatSoldier->militusMemento());
        boat1Caretaker->addMemento( boatSoldier1->militusMemento());
        shieldCaretaker->addMemento( shieldSoldier->militusMemento());
        shield1Caretaker->addMemento( shieldSoldier1->militusMemento());

        boatSoldier->engage(boatSoldier1);
        shieldSoldier->engage(shieldSoldier1);
        infSoldier->engage(infSoldier1);

        if(boatSoldier1->lose() || infSoldier1->lose() || shieldSoldier1->lose()){
            counter2++;
        }

        infSoldier1->engage(infSoldier);
        boatSoldier1->engage(boatSoldier);
        shieldSoldier1->engage(shieldSoldier);
        if(boatSoldier->lose() || infSoldier->lose() || shieldSoldier->lose()){
            counter++;
        }


        if(counter2 >= 2){
            cout << "Group2 lost" << endl;
            break;
        }

        if(counter >= 2){
            cout << "Group1 lost" << endl;
            break;
        }


        infSoldier->vivificaMemento(infCaretaker->getMemento());
        infSoldier1->vivificaMemento(inf1Caretaker->getMemento());
        boatSoldier->vivificaMemento(boatCaretaker->getMemento());
        boatSoldier1->vivificaMemento(boat1Caretaker->getMemento());
        shieldSoldier->vivificaMemento(shieldCaretaker->getMemento());
        shieldSoldier1->vivificaMemento(shield1Caretaker->getMemento());
    }

    return 0;
}
