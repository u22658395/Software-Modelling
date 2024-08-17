#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

class LegionFactory {


public:
	virtual Infantry* createInfanctry() = 0;

	virtual Cavalry* createCavalry() = 0;

	virtual Artillery* createArtillery() = 0;
};

#endif
