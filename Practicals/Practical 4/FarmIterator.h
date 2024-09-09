#ifndef FARMITERATOR_H
#define FARMITERATOR_H
#include "Farm.h"
#include <memory>

class FarmIterator {
public:
    virtual void firstFarm() = 0;
    virtual void next() = 0;
    virtual bool isDone() const = 0;
    virtual std::shared_ptr<Farm> currentFarm() const = 0;
    virtual ~FarmIterator() = default;
};

#endif