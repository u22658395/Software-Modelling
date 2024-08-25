#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy {


public:
	virtual void engage(LegionUnit* unit)=0;
	virtual ~BattleStrategy(){};
	virtual BattleStrategy* clone() const = 0;

	
};

#endif
