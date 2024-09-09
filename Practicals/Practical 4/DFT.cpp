#ifndef DFT_CPP
#define DFT_CPP
#include "DFT.h"

DFT::DFT(const std::shared_ptr<Farm>& root) {
        farmStack.push(root);
    }

    void DFT:: firstFarm() 
    {
        if (!farmStack.empty()) {
            farmStack.push(farmStack.top());
        }
    }

    void DFT:: next() 
    {
        if (!farmStack.empty()) {
            auto current = farmStack.top();
            farmStack.pop();

            for (const auto& child : current->getUnits()) {
                farmStack.push(child);
            }
        }
    }

    bool DFT:: isDone() const 
    {
        return farmStack.empty();
    }

    std::shared_ptr<Farm> DFT:: currentFarm() const 
    {
        return farmStack.empty() ? nullptr : farmStack.top();
    }
#endif