#include "CareTaker.h"

CareTaker::CareTaker(){

}

void CareTaker::addMemento(Memento* m){
    if(m != nullptr){
        mementos.push_back(m);
    }
}

Memento* CareTaker::getMemento(int index){
    if(index > 0 && index < mementos.size()){
        return mementos.at(index);
    }
    return nullptr;

}
