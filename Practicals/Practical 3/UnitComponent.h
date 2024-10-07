// UnitComponent.h
#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

#include <string>
#include <iostream>

class UnitComponent {

public:
    int attackPower;
    int defensePower;

    int health;
    int damage;
    std::string name;
    virtual void move() = 0;
    virtual void attack() = 0;
 
    ~UnitComponent()
    {

    }
};

#endif // UNITCOMPONENT_H