#include "Soldiers.h"

void Soldiers::engage(){
    prepare();
    execute();
}

void Soldiers::disengage(){
    retreat();
    rest();
}
