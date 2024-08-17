#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "Infantry.h";
#include "Cavalry.h";
#include "Artillery.h";
#include "LegionFactory.h";

class OpenFieldFactory : LegionFactory {


public:
	Infantry* createInfanctry();

	Cavalry* createCavalry();

	Artillery* createArtillery();

	void deployArtillery();
};

#endif
