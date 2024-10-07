#include "BoatmanFactory.h"


BoatmanFactory::BoatmanFactory()
{
	soldiers=new Boatman();
}

Soldiers* BoatmanFactory::createUnit() {
	soldiers->setStrength(calculateStrength());
	return soldiers->clonis();
}
