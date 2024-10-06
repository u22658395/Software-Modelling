#include "OldLight.h"

OldLight:: OldLight(/* args */)
{
    isOn=false;
}
OldLight:: ~OldLight()
{

}
void OldLight :: turnOn()
{
    isOn=true;
}
void OldLight:: turnOff()
{
    isOn=false;
}
bool OldLight:: getStatus()
{
    return isOn;
}