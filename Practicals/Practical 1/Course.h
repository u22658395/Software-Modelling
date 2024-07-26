#ifndef MENUITEM_H
#define MENUITEM_H

#include "MenuItem.h"

#include<iostream>
#include<vector>
using namespace std;

class Course{
    public:
        Course(string description, int maxNumberOfItems);
        string getDescription();
        bool addMenuItem(string description, float price, int stock);
        void printMenuItems();
        void printInventory();
        MenuItem* getMenuItem(int index);
        virtual void recommendBeverage() = 0;
        virtual ~Course();

    protected:
        string description;
        int maxNumberOfItems;
        vector<MenuItem*> menuItems;
};
#endif
