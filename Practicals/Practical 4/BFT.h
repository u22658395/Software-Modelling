#ifndef BFT_H
#define BFT_H
#include "FarmIterator.h"
#include <queue>
#include <memory>
#include "Farm.h"

class BFT : public FarmIterator {
private:
    std::queue<std::shared_ptr<Farm>> farmQueue;

public:
    BFT(const std::shared_ptr<Farm>& root);
    void firstFarm()  ;

    void next()  ;

    bool isDone() const ;

    std::shared_ptr<Farm> currentFarm() const  ;
};


#endif