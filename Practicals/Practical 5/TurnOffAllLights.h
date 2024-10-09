#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H
#include "Command.h"
#include "Light.h"
#include "vector"

class TurnOffAllLights : public Command
{
    private:
        vector<Device*> lights; // an array of lights whose lights will be turned on
    public:
        TurnOffAllLights(); //
        TurnOffAllLights(vector<Device *> lights);
        void addLight(Light* l); //used to add a light to the vector
        virtual void execute();
        ~TurnOffAllLights();
};
#endif
