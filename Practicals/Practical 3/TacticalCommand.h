#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "WarArchives.h"
#include "TacticalPlanner.h"
#include "LegionUnit.h"
#include "Ambush.h"

class TacticalCommand {
private:
    TacticalPlanner* planner;
    WarArchives* archives;
    BattleStrategy* strategy;

public:
    TacticalCommand()
    {
        strategy=new Ambush();
        planner= new TacticalPlanner();
        planner->setStrategy(strategy);
        archives= new WarArchives();
    }
    
    // TacticalPlanner* getPlanner()
    // {
    //     return planner;
    // }
    WarArchives* getArchives(){
        return archives;
    }

    void setStrategy(BattleStrategy* newStrategy) {
        if (strategy) delete strategy;
        strategy = newStrategy;
    }

    void executeStrategy(LegionUnit* unit) {
        if (strategy &&unit) strategy->engage(unit);
    }

    void saveCurrentStrategy(const std::string& label) {
         if (strategy) {
        archives->addTacticalMemento(label, planner->createMemento());
        }
    }

    void loadStrategy(const std::string& label) {
        TacticalMemento* memento = archives->getTacticalMemento(label);
        if (memento) {
            planner->restoreMemento(memento);
        }
    }
    BattleStrategy* getStrategy()
    {
        return this->strategy;
    }


    ~TacticalCommand() 
    {
        if (strategy) delete strategy;
    }

    // void chooseBestStrategy()
    // {
        
    // }
    
};

#endif // TACTICALCOMMAND_H
