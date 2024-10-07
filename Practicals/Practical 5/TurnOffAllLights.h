#ifndef TURNOFFALLLIGHTS_H
#define TURNOFFALLLIGHTS_H
#include "Command.h"
<<<<<<< HEAD

class TurnOffAllLights: public Command
{
private:
    /* data */
public:
    TurnOffAllLights(/* args */);
    ~TurnOffAllLights();
    void execute();
};



#endif
=======
#include "Light.h"
#include "vector"

class TurnOffAllLights : public Command
{
    private:
        vector<Light> lights; // an array of lights whose lights will be turned on
    public:
        TurnOffAllLights(vector<Light> lights); //
        void addLight(Light l); //used to add a light to the vector
        virtual void execute();
};
#endif
>>>>>>> 1d39d63f06f3645c5f63ab951d4a8d4a6d13777f
