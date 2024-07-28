#include "Course.h"
#include "Dessert.h"
#include "MainCourse.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Starter.h"

#include <iomanip>
#include <iostream>
using namespace std;

void testMenuItem();
void testStarter();
void testMainCourse();
void testDessert();

int main(int argc, char const *argv[])
{
    testMenuItem();
    testStarter();
    testMainCourse();
    return 0; 
}


/*function implementations---------function implementations---------function implementations---------*/
void testMenuItem(){
    MenuItem mi("hi", 11.90, 2);
    cout << mi.getDescription() << ", ";
    cout << mi.getStock() << ", ";
    cout << mi.getPrice() <<endl;

    mi.reduceStock();
    cout << "\nReduced Stock:" << endl;
    cout << mi.getDescription() << ", ";
    cout << mi.getStock() << ", ";
    cout << mi.getPrice() <<endl;

    mi.reduceStock();
    cout << "\nReduced Stock:" << endl;
    cout << mi.getDescription() << ", ";
    cout << mi.getStock() << ", ";
    cout << mi.getPrice() <<endl;
    
    mi.reduceStock();
    cout << "\nReduced Stock:" << endl;
    cout << mi.getDescription() << ", ";
    cout << mi.getStock() << ", ";
    cout << mi.getPrice() <<endl;

}

void testStarter(){

    Course* s = new Starter(2);
    cout << "Starter: "<< s->getDescription();
    cout << "\nAdd Items:\n";
    cout << "item1: " <<(bool)s->addMenuItem("item1",14.00,3) << endl;
    cout << "item2: " <<(bool)s->addMenuItem("item2",7.09,1) << endl;
    cout << "item3: " <<(bool)s->addMenuItem("item3",10.00,8) << endl;

    cout << "\nget items:" << endl
        << ((s->getMenuItem(0) == nullptr)? "null" : s->getMenuItem(0)->getDescription()) << endl
        << ((s->getMenuItem(1)== nullptr)? "null" : s->getMenuItem(0)->getDescription()) << endl
        << ((s->getMenuItem(2)== nullptr)? "null" : s->getMenuItem(0)->getDescription()) << endl;


    cout << "Recommended: ";
    s->recommendBeverage();

    cout << "\nprint items:\n";
    s->printMenuItems();
    cout << "\n inventory:\n";
    s->printInventory();

    delete s;
}

void testMainCourse(){

    Course* mC = new MainCourse(2);
    cout << "MainCourse: "<< mC->getDescription();
    cout << "\nAdd Items:\n";
    cout << "item1: " <<(bool)mC->addMenuItem("item1",14.00,3) << endl;
    cout << "item2: " <<(bool)mC->addMenuItem("item2",7.09,1) << endl;
    cout << "item3: " <<(bool)mC->addMenuItem("item3",10.00,8) << endl;

    cout << "\nget items:" << endl
        << ((mC->getMenuItem(0) == nullptr)? "null" : mC->getMenuItem(0)->getDescription()) << endl
        << ((mC->getMenuItem(1)== nullptr)? "null" : mC->getMenuItem(0)->getDescription()) << endl
        << ((mC->getMenuItem(2)== nullptr)? "null" : mC->getMenuItem(0)->getDescription()) << endl;

    cout << "Recommended: ";
    mC->recommendBeverage();

    cout << "\nprint items:\n";
    mC->printMenuItems();
    cout << "\n inventory:\n";
    mC->printInventory();

    delete mC;
}