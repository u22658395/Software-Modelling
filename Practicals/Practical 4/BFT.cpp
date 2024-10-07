#ifndef BFT_CPP
#define BFT_CPP
#include "BFT.h"
#include "FarmUnit.h"

BFT::BFT(const std::shared_ptr<FarmUnit>& root) 
{
    farmQueue.push(root);
}

void BFT:: firstFarm() 
{
    if (!farmQueue.empty()) {
        farmQueue.push(farmQueue.front());
    }
}

void BFT:: next() 
{
    if (!farmQueue.empty()) {
        auto current = farmQueue.front();
        farmQueue.pop();

        for (const auto& child : current->getUnits()) {
            farmQueue.push(child);
        }
    }
}

bool BFT:: isDone() const 
{
    return farmQueue.empty();
}

std::shared_ptr<FarmUnit> BFT:: currentFarm() const 
{
    return farmQueue.empty() ? nullptr : farmQueue.front();
}


#endif