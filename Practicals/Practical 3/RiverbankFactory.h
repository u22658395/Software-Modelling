#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "Infantry.h";
#include "Cavalry.h";
#include "Artillery.h";
#include "LegionFactory.h";

class RiverbankFactory : LegionFactory {


public:
	Infantry* createInfanctry();

	Cavalry* createCavalry();

	Artillery* createArtillery();
};

#endif
