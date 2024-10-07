#ifndef MACROROUTINE_H
#define MACROROUTINE_H
#include <vector>
#include "Command.h"

class MacroRoutine
{
protected:
     vector<Command*> commands;
public:
    MacroRoutine(/* args */);
    ~MacroRoutine();
    void addProcedure(Command* cmd);
    void removeProcedure(Command*  cmd);
    void execute();
};


#endif