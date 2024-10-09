#include "MacroRoutine.h"


MacroRoutine::~MacroRoutine()
{
    commands.clear();
}

void MacroRoutine::addProcedure(string n, Command *c)
{
    commands.insert(pair<string, Command *>(n, c));
}

void MacroRoutine::removeProcedure(string n)
{
    commands.erase(n);
}

void MacroRoutine::execute(){
    for(map<string,Command*>::iterator it = commands.begin(); it != commands.end(); ++it){
        it->second->execute();
    }

    std::cout<<"\nGOOD NIGHT !!\n"<<std::endl;
}