#ifndef CAVALRYOPENFIELD_H
#define CAVALRYOPENFIELD_H

#include "Cavalry.h"

class CavalryOpenField : public Cavalry {
public:
    CavalryOpenField() {
        // Custom attributes for Open Field Cavalry
        attackPower = 80;
        defensePower = 55;
    }

    void move() {
        std::cout << "CavalryOpenField galloping across the open plains.\n";
    }

    void attack() {
        std::cout << "CavalryOpenField charging head-on with unmatched speed.\n";
    }
};

#endif  // CAVALRYOPENFIELD_H
