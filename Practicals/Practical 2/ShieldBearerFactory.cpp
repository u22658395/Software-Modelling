#include "ShieldBearerFactory.h"

Soldiers* ShieldBearerFactory::createUnit() {
	return new ShieldBearer();
}
