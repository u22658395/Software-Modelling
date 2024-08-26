#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory {
protected:
    int budget;
public:
    LegionFactory(int initialBudget) : budget(initialBudget) {}
    virtual Infantry* createInfantry() = 0;
    virtual Cavalry* createCavalry() = 0;
    virtual Artillery* createArtillery() = 0;
    int getBudget()
	{
		return budget;
	}
    void spendBudget(int amount)
	{
		budget-=amount;
	}
    void deployArtillery() {
        if (budget >= 500) {  // Assume the cost of deploying artillery is 500
            Artillery* artillery = createArtillery();
            std::cout << "Deploying Riverbank-specific Artillery\n";
            artillery->move();
            artillery->attack();
            spendBudget(500);
            delete artillery;
        } else {
            std::cout << "Insufficient budget to deploy Riverbank Artillery\n";
        }
    }

    // virtual ~LegionFactory();
};

#endif
