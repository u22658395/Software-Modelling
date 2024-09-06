#ifndef SOILSTATE_H
#define SOILSTATE_H
#include "Cropfield.h"

class SoilState {
public:
    virtual int harvestCrops(int baseYield) const = 0;
    virtual void rain(CropField* field) = 0;
    virtual std::string getName() const = 0;
    virtual ~SoilState() = default;
};

#endif
