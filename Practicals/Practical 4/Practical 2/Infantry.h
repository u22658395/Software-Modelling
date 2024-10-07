#ifndef INFANTRY_H
#define INFANTRY_H

#include "Soldiers.h"
#include <string>

class Infantry : public Soldiers {

public:
	Infantry();
	Infantry(int value1, int value2, int value3, int value4, std::string value5,int value6);
	Infantry* clonis();
	// void engage();
	// void disengage(Memento*);

	void prepare();
	void execute(Soldiers* );
	void retreat();
	
	void rest(Memento*);
};

#endif
