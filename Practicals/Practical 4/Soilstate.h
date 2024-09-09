#ifndef SOILSTATE_H
#define SOILSTATE_H
#include <memory>
#include <string>
class CropField;

class SoilState {
public:
    virtual int harvestCrops(int baseYield) = 0;
    virtual void rain(CropField* field) = 0;
    virtual std::string getName() = 0;
    virtual ~SoilState() = default;
};

#endif
