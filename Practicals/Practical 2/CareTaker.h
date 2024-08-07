#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include<vector>
using namespace std;

class CareTaker {
    public:
        CareTaker();
        void addMemento(Memento* m);
        Memento* getMemento(int index);

    private:
        vector<Memento*> mementos;


};

#endif
