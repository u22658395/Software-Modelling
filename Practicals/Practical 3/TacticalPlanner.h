#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

class TacticalPlanner {

private:
	BattleStrategy* currentStrategy;

public:
	TacticalMemento createMemento();

	void restoreMemento(TacticalMemento memento);
};

#endif
