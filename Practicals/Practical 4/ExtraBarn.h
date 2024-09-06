#ifndef ExtraBarn_H
#define  ExtraBarn_H
#include"Decorator.h"

class ExtraBarn : public Decorator
{
    int extraCapacity;
    public:
    ExtraBarn(std::shared_ptr<CropField> field, int extraCapacity);
    int getLeftoverCapacity() const override ;
};

#endif