#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H
#include "Soldiers.h"
#include <string>
class ShieldBearer : public Soldiers {

public:
	ShieldBearer();
	ShieldBearer(int value1, int value2, int value3, int value4, std::string value5,int value6);
	ShieldBearer* clonis();
	// 	void engage();
	// void disengage(Memento*);

	void prepare();
	void execute(Soldiers* );
	void retreat();
	
	void rest(Memento*);
};

#endif
