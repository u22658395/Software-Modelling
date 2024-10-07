#ifndef TRUCK_H
#define TRUCK_H
#include <string>
class Truck {
    
protected:
    std:: string Tname;

public:
    virtual void update() = 0;
    virtual void startEngine() = 0;
    virtual ~Truck() = default;
    std:: string getTruckName()
    {
        return Tname;
    }
};
#endif