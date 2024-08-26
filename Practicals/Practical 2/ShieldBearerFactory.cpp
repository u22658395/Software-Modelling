#include "ShieldBearerFactory.h"

ShieldBearerFactory::ShieldBearerFactory()
{
	soldiers=new ShieldBearer();
}

Soldiers* ShieldBearerFactory::createUnit() {
	soldiers->setStrength(calculateStrength());
	return soldiers->clonis();
}
