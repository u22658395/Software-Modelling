#ifndef TRUCk_H
#define TRUCK_H
class Truck {
public:
    virtual void update() = 0;
    virtual void startEngine() = 0;
    virtual ~Truck() = default;
};
#endif