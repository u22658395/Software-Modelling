#include "MacroRoutine.h"

<<<<<<< HEAD
MacroRoutine:: MacroRoutine(/* args */)
{

}
MacroRoutine:: ~MacroRoutine()
{

}
void MacroRoutine::  addProcedure(Command* cmd)
{
    commands.push_back(cmd);
}
void MacroRoutine:: removeProcedure(Command*  cmd)
{
        for (auto i = commands.begin(); i != commands.end(); ++i)
    {
        if(*i==cmd)
        {
            commands.erase(i);
            break;
        }
    }
}
void MacroRoutine:: execute()
{
    std::cout << "Executing MacroRoutine...\n";
        for (const auto& cmd : commands) {
            cmd->execute();
        }
=======
MacroRoutine::MacroRoutine(/* args */)
{

}

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
>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
}