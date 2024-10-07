#include "Country.h"

Country::Country(){

}

Country::Country(Soldiers* inf, Soldiers* boat, Soldiers* shield, string name){
    if(inf != NULL){
        infantry = inf;
    }
    else{
        infantry = new Infantry();
    }
    
    if(boat != NULL){
        boatman = boat;
    }
    else{
        boatman = new Boatman();
    }
    
    if(shield != NULL){
        shieldBearer = shield;
    }
    else{
        shieldBearer = new ShieldBearer();
    }


    infantryCaretaker = new CareTaker();
    boatmanCaretaker = new CareTaker();
    shieldCaretaker = new CareTaker();

}

bool Country::fight(Country* opponent){
    if(losses <2){
        return true;
    }
    else
        return false;
    infantryCaretaker->addMemento(infantry->militusMemento());
    boatmanCaretaker->addMemento(boatman->militusMemento());
    shieldCaretaker->addMemento(shieldBearer->militusMemento());

    infantry->engage(opponent->infantry);
    shieldBearer->engage(opponent->shieldBearer);
    boatman->engage(opponent->boatman);

    if(boatman->lose()){
        cout << countryName << "'s boatman lost!";
    }
    
    if(infantry->lose()){
        cout << countryName << "'s infantry lost!";
    }
    
    if(shieldBearer->lose()){
        cout << countryName << "'s shieldbearers lost!";
    }



}