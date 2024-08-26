#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include<queue>
using namespace std;

class CareTaker {
    public:
        CareTaker();
        ~CareTaker();
        void addMemento(Memento* m);
        Memento* getMemento();

    private:
        queue<Memento*> mementos;


};

#endif
