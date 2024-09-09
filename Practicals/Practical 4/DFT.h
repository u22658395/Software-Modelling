#ifndef DFT_H
#define DFT_H
#include "Farm.h"
#include "FarmIterator.h"
#include <stack>

class DFT : public FarmIterator {
private:
    std::stack<std::shared_ptr<Farm>> farmStack;

public:
    explicit DFT(const std::shared_ptr<Farm>& root);

    void firstFarm() ;
    void next() ;

    bool isDone() const ;

    std::shared_ptr<Farm> currentFarm() const ;
};

#endif