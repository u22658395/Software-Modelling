#ifndef FARM_CPP
#define FARM_CPP
#include "FarmUnit.h"


void FarmUnit::  setSoilState(std::shared_ptr<SoilState> soilState)
{
    this->soilState=soilState;
}
int FarmUnit:: getCapacity()
{
    return capacity;
}
// std::string FarmUnit::getSoilStateName()
// {
//     return soilState.getName();
// }

#endif