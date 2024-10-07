<<<<<<< HEAD
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
=======
#include "Command.h"
#include "map"
class MacroRoutine
{
    private:
        /* data */
        map<string,Command*> commands;  //the commands fo the specific Routine
    public:
        MacroRoutine(/* args */);
        virtual ~MacroRoutine();
        void addProcedure(string n, Command* c);
        void removeProcedure(string n);
        void execute();
};


>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
