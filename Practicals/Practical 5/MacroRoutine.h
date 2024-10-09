#include "Command.h"
#include "map"
class MacroRoutine
{
    private:
        /* data */
        map<string,Command*> commands;  //the commands fo the specific Routine
    public:
        MacroRoutine(/* args */){}
        virtual ~MacroRoutine();
        void addProcedure(string n, Command* c);
        void removeProcedure(string n);
        void execute();
};


