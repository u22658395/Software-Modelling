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
void testCourse();

int main(int argc, char const *argv[])
{
    testMenuItem();
    testCourse();
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

void testCourse(){
    Course c("C1",4);
    cout << "\nAdd Items:\n";
    cout << "item1: " <<(bool)c.addMenuItem("item1",14.00,3) << endl;
    cout << "item2: " <<(bool)c.addMenuItem("item2",7.09,1) << endl;
    cout << "item3: " <<(bool)c.addMenuItem("item3",10.00,8) << endl;

    cout << "\nget items:" << endl
        << c.getMenuItem(0)->getDescription() << endl
        << c.getMenuItem(1)->getDescription() << endl
        << c.getMenuItem(2)->getDescription() << endl;

    cout << "\nprint items:\n";
    c.printMenuItems();
    cout << "\n inventory:\n";
    c.printInventory();


}