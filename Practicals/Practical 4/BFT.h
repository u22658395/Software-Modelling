#ifndef BFT_H
#define BFT_H
#include "FarmIterator.h"
#include <queue>
#include <memory>
#include "FarmUnit.h"

class BFT : public FarmIterator {
private:
    std::queue<std::shared_ptr<FarmUnit>> farmQueue;

public:
    BFT(const std::shared_ptr<FarmUnit>& root);
    void firstFarm()  ;

    void next()  ;

    bool isDone() const ;

    std::shared_ptr<FarmUnit> currentFarm() const  ;
};


#endif