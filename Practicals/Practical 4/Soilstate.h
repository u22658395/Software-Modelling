#ifndef SOILSTATE_H
#define SOILSTATE_H
#include <memory>
#include <string>
class CropField;

class SoilState {
    public:
        SoilState(std::string name){
            this->name = name;
        }
        virtual int harvestCrops(int baseYield) = 0;
        virtual void rain(std::shared_ptr<CropField> field) = 0;
        std::string getName(){return this->name;}
        virtual ~SoilState() = default;
    protected:
        std::string name;;
};

#endif
