#include "Course.h"
#include <iostream>
using namespace std;


Course::Course(string description, int maxNumberOfItems){
    this->description = description;
    this->maxNumberOfItems = maxNumberOfItems;
}

string Course::getDescription(){
    return description;
}

bool Course::addMenuItem(string description, float price, int stock){
    int iniSize = menuItems.size();
    if(iniSize == maxNumberOfItems){
        return false;
    }
    else{
        menuItems.push_back(new MenuItem(description,price, stock));
        return true;    
    }
}

void Course::printMenuItems(){
    char charIndex = 'a';

    for (int i = 0; i < menuItems.size(); i++,charIndex++)
    {
        cout << '\t' << charIndex << ".\t" << menuItems.at(i)->getDescription() <<'\n';
    }
}

void Course::printInventory(){
    char charIndex = 'a';
    for (int i = 0; i < menuItems.size(); i++,charIndex++)
    {
        cout.precision(2);
        cout << '\t' << charIndex << ".\t" << menuItems.at(i)->getDescription() <<'\t' << std::fixed << menuItems.at(i)->getPrice() <<'\t'<< menuItems.at(i)->getStock() <<'\n';
    }
}

MenuItem* Course:: getMenuItem(int index){
    try
    {
        return menuItems.at(index);
    }
    catch(const std::out_of_range& e)
    {
        return nullptr;
    }
    
}

Course::~Course(){
    for (int i = 0; i < menuItems.size(); i++)
    {
        delete menuItems.at(i);
        menuItems.at(i) = nullptr;
    }

    menuItems.clear();
    
}
