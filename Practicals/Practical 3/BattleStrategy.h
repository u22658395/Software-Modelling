#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H
#include "LegionUnit.h"
#include"Infantry.h"
#include"Artillery.h"
#include"Cavalry.h"
class LegionUnit;
class BattleStrategy {


public:
	virtual void engage(LegionUnit* unit)=0;
	virtual ~BattleStrategy(){};
	virtual BattleStrategy* clone() const = 0;

	
};

#endif
