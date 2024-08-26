#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "TacticalMemento.h"

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;

public:
    TacticalPlanner() : currentStrategy(nullptr) {}

    void setStrategy(BattleStrategy* strategy) {
        if (currentStrategy) {
            delete currentStrategy;
        }
        currentStrategy = strategy->clone();
    }

    TacticalMemento* createMemento() const {
        return new TacticalMemento(currentStrategy);
    }

    void restoreMemento(TacticalMemento* memento) {
        setStrategy(memento->getSavedStrategy());
    }

    ~TacticalPlanner() {
        delete currentStrategy;
    }
};

#endif // TACTICALPLANNER_H
