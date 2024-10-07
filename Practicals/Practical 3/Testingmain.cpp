#include <iostream>
#include "LegionFactory.h"
#include "WoodlandFactory.h"
#include "Battle.h"
#include "OpenFieldFactory.h"
#include "RiverbankFactory.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"
// #include "LegionUnit.h"
// #include "Infantry.h"
// #include "Cavalry.h"
// #include "Artillery.h"
// Add other necessary headers


int main() {
    WoodlandFactory woodlandFactory(1000);
    OpenFieldFactory openfieldfactory(1000);
    RiverbankFactory riverbankFactory(2000);
<<<<<<< HEAD
    int round=1;
=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
        
    riverbankFactory.getBudget();
    openfieldfactory.getBudget();
    woodlandFactory.getBudget();
        Battle* battle = new Battle();

    // Create units
    LegionUnit* infantry1 = woodlandFactory.createInfantry();
    LegionUnit* cavalry1 = woodlandFactory.createCavalry();
    LegionUnit* artillery1 = woodlandFactory.createArtillery();
    infantry1->add(riverbankFactory.createInfantry());
    cavalry1->add(openfieldfactory.createCavalry());
    artillery1->add(openfieldfactory.createArtillery());
    

    battle->addUnit(infantry1);
    battle->addUnit(cavalry1);
    battle->addUnit(artillery1);
    woodlandFactory.deployArtillery();
<<<<<<< HEAD
    openfieldfactory.deployInfantry();
    riverbankFactory.deployCavalry();
    // battle->addUnit(new Infantry());
    // battle->addUnit(new Cavalry);
    // battle->addUnit(new Artillery);
=======
    openfieldfactory.deployArtillery();
    riverbankFactory.deployArtillery();
    battle->addUnit(new Infantry());
    battle->addUnit(new Cavalry);
    battle->addUnit(new Artillery);
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    // Set initial tactic
    BattleStrategy* ambush = new Ambush();
    BattleStrategy*clone= ambush->clone();
    delete clone;
    battle->applyStrategy(cavalry1);
<<<<<<< HEAD
    // ambush->engage(artillery1);
=======
    ambush->engage(artillery1);
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71


    // Start battle
    battle->startBattle();

    // Engage units
    battle->applyStrategy(infantry1);
<<<<<<< HEAD
        infantry1->move();
        artillery1->move();
    while(infantry1->isAlive()&&artillery1->isAlive())
    {

=======
    while(infantry1->isAlive()&&artillery1->isAlive())
    {
        infantry1->move();
        artillery1->move();
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
        ambush->engage(infantry1);
        ambush->engage(artillery1);
        artillery1->attack();
        infantry1->attack();
        void displayBattleInfo();
    }
<<<<<<< HEAD

=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    if(infantry1->isAlive())
    {
        std::cout<<"Infantry wins!!!!"<<std::endl;
        battle->removeUnit(artillery1);
<<<<<<< HEAD

=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    }
    else if(artillery1->isAlive())
    {
         std::cout<<"Artillery wins!!!!"<<std::endl;
         battle->removeUnit(infantry1);
    }
    else
    {
        std::cout<<"Nobody wins.Everybody is dead!!!"<<std::endl;
<<<<<<< HEAD
        battle->removeUnit(artillery1);
        battle->removeUnit(infantry1);
=======
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    }
    // Save tactic
    battle->saveTactic("Ambush");
    
    // Restore tactic
    battle->restoreTactic("Ambush");
    battle->updateBattle();
    battle->applyStrategy(infantry1);
    battle->displaySavedTactics();
    battle->endBattle();
<<<<<<< HEAD
    round++;
=======
    // Clean up
    std::cout << R"(
    .../\
      //\\
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||__||
     |____|
       ||
       ||
       ||
      /__\
    )" << std::endl;


>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
std:: cout<< "-------------------ROUND 2---------------------"<<std::endl;
    LegionUnit* infantry = openfieldfactory.createInfantry();
    LegionUnit* cavalry = openfieldfactory.createCavalry();
    LegionUnit* artillery = openfieldfactory.createArtillery();
    infantry->add(riverbankFactory.createInfantry());
    cavalry->add(openfieldfactory.createCavalry());
    artillery->add(openfieldfactory.createArtillery());
    Battle* battle2 = new Battle();
    battle2->addUnit(infantry);
    battle2->addUnit(cavalry);
    battle2->addUnit(artillery);

BattleStrategy* strat= ambush->clone();
delete strat;
strat=new Flanking();
<<<<<<< HEAD
// strat->engage(cavalry);
=======
strat->engage(cavalry);
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71

    battle2->applyStrategy(artillery);


    // Start battle
    battle2->startBattle();

    // Engage units
<<<<<<< HEAD
        battle2->applyStrategy(cavalry);
        battle2->applyStrategy(infantry);
        infantry->move();
        cavalry->move();
    while(infantry->isAlive()&&cavalry->isAlive())
    {

        strat->engage(infantry);
        strat->engage(artillery);
        cavalry->attack();
=======
    battle2->applyStrategy(cavalry);
        battle2->applyStrategy(infantry);
    while(infantry->isAlive()&&artillery->isAlive())
    {
        infantry->move();
        artillery->move();
        ambush->engage(infantry);
        ambush->engage(artillery);
        artillery->attack();
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
        infantry->attack();
        battle->displayBattleInfo();
    }
    if(infantry->isAlive())
    {
        std::cout<<"Infantry wins!!!!"<<std::endl;
    }
<<<<<<< HEAD
    else if(cavalry->isAlive())
=======
    else if(artillery->isAlive())
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    {
         std::cout<<"Artillery wins!!!!"<<std::endl;
    }
    else
    {
        std::cout<<"Nobody wins.Everybody is dead!!!"<<std::endl;
    }
    // Save tactic
    battle2->saveTactic("Flanking");
    
    // Restore tactic
    battle2->restoreTactic("Flanking");
    battle2->updateBattle();
    battle2->displaySavedTactics();
    battle2->endBattle();
<<<<<<< HEAD
    
=======
    // Clean up
    std::cout << R"(
    .../\
      //\\
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||__||
     |____|
       ||
       ||
       ||
      /__\
    )" << std::endl;
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71

    delete infantry1;
    delete cavalry1;
    delete artillery1;
    delete infantry;
    delete cavalry;
    delete artillery;
    delete ambush;
    delete strat;
<<<<<<< HEAD
    round++;

=======


>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
    std:: cout<< "-------------------ROUND 3---------------------"<<std::endl;

    LegionUnit* infantry3 = riverbankFactory.createInfantry();
    LegionUnit* cavalry3 = riverbankFactory.createCavalry();
    LegionUnit* artillery3 = riverbankFactory.createArtillery();
    
    Battle* battle3 = new Battle();
    infantry3->add(riverbankFactory.createInfantry());
    cavalry3->add(openfieldfactory.createCavalry());
    artillery3->add(openfieldfactory.createArtillery());
    battle3->addUnit(infantry3);
    battle3->addUnit(cavalry3);
    battle3->addUnit(artillery3);

<<<<<<< HEAD
 //strat= ambush->clone();
 
// delete strat;

strat=new Fortification();
// // strat->engage(infantry3);
=======
//  strat= ambush->clone();
//  
// delete strat;

strat=new Fortification();
strat->engage(infantry3);
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71

    battle3->applyStrategy(artillery3);


    // Start battle
    battle3->startBattle();

    // Engage units
<<<<<<< HEAD
        battle3->applyStrategy(cavalry3);
        battle3->applyStrategy(infantry3);
        infantry3->move();
        cavalry3->move();
        
    while(infantry3->isAlive()&&cavalry3->isAlive())
    {
        strat->engage(infantry3);
        strat->engage(cavalry3);
        std::cout<<"heeeeeeeeeeeeeeeeeee"<<std:: endl;
        cavalry3->attack();
=======
    battle3->applyStrategy(cavalry3);
        battle3->applyStrategy(infantry3);
    while(infantry3->isAlive()&&cavalry3->isAlive())
    {
        infantry3->move();
        artillery3->move();
        ambush->engage(infantry3);
        ambush->engage(artillery3);
        artillery3->attack();
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71
        infantry3->attack();
        battle->displayBattleInfo();
    }
    if(infantry3->isAlive())
    {
        std::cout<<"Infantry wins!!!!"<<std::endl;
    }
    else if(artillery3->isAlive())
    {
         std::cout<<"Artillery wins!!!!"<<std::endl;
    }
    else
    {
        std::cout<<"Nobody wins.Everybody is dead!!!"<<std::endl;
    }
    // Save tactic
    battle3->saveTactic("Flanking");
    
    // Restore tactic
    battle3->restoreTactic("Flanking");
    battle3->updateBattle();
    battle3->displaySavedTactics();
    battle3->endBattle();
<<<<<<< HEAD
    
=======
    // Clean up
    std::cout << R"(
    .../\
      //\\
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||  ||
     ||__||
     |____|
       ||
       ||
       ||
      /__\
    )" << std::endl;
>>>>>>> 1f83a37640941d04290f15c8300276f8c2792c71

    delete infantry3;
    delete cavalry3;
    delete artillery3;
    // // delete cavalry;
    // // delete artillery;
    // // delete ambush;
    delete strat;
    delete battle;
    delete battle2;
    delete battle3;
    return 0;
}
