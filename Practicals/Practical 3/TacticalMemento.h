#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
private:
    BattleStrategy* savedStrategy;

public:
    TacticalMemento(BattleStrategy* strategy) : savedStrategy(strategy) {}
    
    ~TacticalMemento() {
        delete savedStrategy;
    }
    
    BattleStrategy* getSavedStrategy() const {
        return savedStrategy->clone();
    }
};

#endif // TACTICALMEMENTO_H
