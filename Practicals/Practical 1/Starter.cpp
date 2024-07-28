#include "Course.h"
#include "Starter.h"

Starter::Starter(int maxNumberOfItems):Course("Starter",maxNumberOfItems){
}

void Starter::recommendBeverage(){
    cout << "Sparkling Water\n";
}
