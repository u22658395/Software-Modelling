#include "MacroRoutine.h"

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
}