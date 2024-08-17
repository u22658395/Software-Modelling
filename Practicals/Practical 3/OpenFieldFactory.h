#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

class OpenFieldFactory : LegionFactory {


public:
	Infantry* createInfanctry();

	Cavalry* createCavalry();

	Artillery* createArtillery();

	void deployArtillery();
};

#endif
