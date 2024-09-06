#ifndef Fertilizer_H
#define  Fertilizer_H
#include "Decorator.h"

class Fertilizer : public Decorator
{
    public:
    Fertilizer(std::shared_ptr<CropField> field) : Decorator(field) {}

    void increaseProduction() override {
        decoratedField->increaseProduction();  // Apply fertilizer
        // Additional logic if needed
    }

};

#endif