#ifndef DFT_H
#define DFT_H
#include "FarmUnit.h"
#include "FarmIterator.h"
#include <stack>

class DFT : public FarmIterator {
private:
    std::stack<std::shared_ptr<FarmUnit>> farmStack;

public:
    explicit DFT(const std::shared_ptr<FarmUnit>& root);

    void firstFarm() ;
    void next() ;

    bool isDone() const ;

    std::shared_ptr<FarmUnit> currentFarm() const ;
};

#endif