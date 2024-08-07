#include "BoatmanFactory.h"



Soldiers* BoatmanFactory::createUnit() {
	return new Boatman();
}
