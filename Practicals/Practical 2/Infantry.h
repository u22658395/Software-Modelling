#ifndef INFANTRY_H
#define INFANTRY_H
#include "Soldiers.h"

class Infantry: protected Soldiers{
    private:
        virtual void prepare();
        virtual void execute();
        virtual void retreat();
        virtual void rest();
};
#endif