#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "Infantry.h";
#include "Cavalry.h";
#include "Artillery.h";
#include "LegionFactory.h";

class WoodlandFactory : LegionFactory {


public:
	Infantry* createInfanctry();

	Cavalry* createCavalry();

	Artillery* createArtillery();
};

#endif
