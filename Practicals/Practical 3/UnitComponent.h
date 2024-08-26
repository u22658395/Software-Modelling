// UnitComponent.h
#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

#include <string>
#include <iostream>

class UnitComponent {
public:
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual void add(UnitComponent* component) {}
    virtual void remove(UnitComponent* component) {}
    ~UnitComponent()
    {

    }
};

#endif // UNITCOMPONENT_H