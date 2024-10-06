#ifndef ROOM_H
#define ROOM_H
#include "Command.h"

class Room
{
    private:
        /* data */
        Command command;

    public:
        Room(/* args */);
        ~Room();
        
        void setCommand(Command command) {
            this.command = command;
        }

        void executeCommand() {
            command.execute();
        }


};
#endif
