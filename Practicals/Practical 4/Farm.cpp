#ifndef FARM_CPP
#define FARM_CPP
#include "Farm.h"


void Farm::  setSoilState(std::shared_ptr<SoilState> soilState)
{
    this->soilState=soilState;
}
int Farm:: getCapacity()
{
    return capacity;
}

#endif