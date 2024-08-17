#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

class RiverbankFactory : LegionFactory {


public:
	Infantry* createInfanctry();

	Cavalry* createCavalry();

	Artillery* createArtillery();
};

#endif
