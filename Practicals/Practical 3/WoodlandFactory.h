#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

class WoodlandFactory : LegionFactory {


public:
	Infantry* createInfanctry();

	Cavalry* createCavalry();

	Artillery* createArtillery();
};

#endif
