#ifndef BATTLE_H
#define BATTLE_H

#include <vector>
#include "LegionUnit.h"
#include "TacticalCommand.h"

class Battle {
private:
    std::vector<LegionUnit*> units_;
    TacticalCommand* tactic_;

protected:
    void displayBattleInfo();

public:
    Battle();
    ~Battle();

    void addUnit(LegionUnit* unit);
    void removeUnit(LegionUnit* unit);

    void setTactic(TacticalCommand* tactic);
    
    void saveTactic(const std::string& label);
    void restoreTactic(const std::string& label);
    void displaySavedTactics();

    void startBattle();
    void updateBattle();
    void endBattle();

    void applyStrategy(LegionUnit* unit);
};

#endif // BATTLE_H
