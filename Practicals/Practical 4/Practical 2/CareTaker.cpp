#include "CareTaker.h"
#include<iostream>
using namespace std;
CareTaker::CareTaker(){

}

void CareTaker::addMemento(Memento* m){
    if(m != nullptr){
        mementos.push(m);
    }
}

Memento* CareTaker::getMemento(){
    if(mementos.size() > 0){
        Memento* m =  mementos.front();
        mementos.pop();
        return m;
    }
    return nullptr;

}

CareTaker::~CareTaker(){
    while (mementos.size() >0)
    {
        mementos.pop();
    }
}