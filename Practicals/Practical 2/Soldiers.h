#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <string>
#include <iostream>

class Soldiers{
    public:
        virtual void engage();
        virtual void disengage();
    private:
        virtual void prepare()=0;
        virtual void execute()=0;
        virtual void retreat()=0;
        virtual void rest()=0;
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiers;
        std::string unitName;

};
#endif