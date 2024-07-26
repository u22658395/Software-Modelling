#ifndef MENUITEM_H
#define MENUITEM_H

#include<iostream>
using namespace std;
class MenuItem{
    public:
        MenuItem(string description, float price, int stock);
        string getDescription();
        float getPrice();
        int getStock();
        void reduceStock();

    private:
        string description;
        float price;
        int stock;
};
#endif
