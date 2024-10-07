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
    virtual LegionUnit* createInfantry() = 0;
    virtual LegionUnit* createCavalry() = 0;
    virtual LegionUnit* createArtillery() = 0;
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
            LegionUnit* artillery = createArtillery();
<<<<<<< HEAD
            // std::cout << "Deploying  Artillery\n";
            //artillery->move();
            //artillery->attack();
             std::cout << R"(
──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌
───▄▄██▌█ DEPLOYING ARTILLERY
▄▄▄▌▐██▌█  
███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
▀(⊙)▀▀▀▀▀▀▀(⊙)(⊙)▀▀▀▀▀▀▀▀▀▀(⊙ 
    )" << std::endl;
=======
            std::cout << "Deploying  Artillery\n";
            artillery->move();
            artillery->attack();
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
            spendBudget(500);
            delete artillery;
        } else {
            std::cout << "Insufficient budget to deploy Artillery\n";
<<<<<<< HEAD
        }
    }
void deployInfantry() {
        if (budget >= 500) {  // Assume the cost of deploying artillery is 500
            LegionUnit* artillery = createInfantry();
            // std::cout << "Deploying  Artillery\n";
            //artillery->move();
            //artillery->attack();
             std::cout << R"(
──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌
───▄▄██▌█ DEPLOYING Infantry
▄▄▄▌▐██▌█  
███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
▀(⊙)▀▀▀▀▀▀▀(⊙)(⊙)▀▀▀▀▀▀▀▀▀▀(⊙ 
    )" << std::endl;
            spendBudget(500);
            delete artillery;
        } else {
            std::cout << "Insufficient budget to deploy Artillery\n";
        }
    }
void deployCavalry() {
        if (budget >= 500) {  // Assume the cost of deploying artillery is 500
            LegionUnit* artillery = createCavalry();
            // std::cout << "Deploying  Artillery\n";
            //artillery->move();
            //artillery->attack();
             std::cout << R"(
──────▄▌▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌
───▄▄██▌█ DEPLOYING Cavalry
▄▄▄▌▐██▌█  
███████▌█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌
▀(⊙)▀▀▀▀▀▀▀(⊙)(⊙)▀▀▀▀▀▀▀▀▀▀(⊙ 
    )" << std::endl;
            spendBudget(500);
            delete artillery;
        } else {
            std::cout << "Insufficient budget to deploy Cavalry\n";
=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
        }
    }

    // virtual ~LegionFactory();
};

#endif
