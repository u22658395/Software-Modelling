#ifndef BOATMAN_H
#define BOATMAN_H
#include "Soldiers.h"
#include <string>
class Boatman : public Soldiers {


public:
	Boatman();
	~Boatman();
	Boatman(int value1, int value2, int value3, int value4, std::string value5,int value6);
	Boatman* clonis();
	// void engage();
	// void disengage(Memento*);

	void prepare();
	void execute(Soldiers* );
	void retreat();
	
	void rest(Memento*);
	
};

#endif


//create infantry unit inf using InfFactory
//inf2 = inf->clone()