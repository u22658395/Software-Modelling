#include "Course.h"
#include "Dessert.h"
#include "MainCourse.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Starter.h"

#include <stdlib.h>
#include <iomanip>
#include <iostream>
using namespace std;

void testMenuItem();
void testCourse(Course*);
void testMenu();

int main(int argc, char const *argv[])
{
    testMenuItem();
    testCourse(new Starter(2));
    testCourse(new MainCourse(1));
    testCourse(new Dessert(3));

    testMenu();
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

void testCourse(Course* c){
    cout<<"\n\n";
    cout << "Class: "<< c->getDescription();
    cout << "\nAdd Items:\n";
    cout << "item1: " <<(bool)c->addMenuItem("item1",14.00,3) << endl;
    cout << "item2: " <<(bool)c->addMenuItem("item2",7.09,1) << endl;
    cout << "item3: " <<(bool)c->addMenuItem("item3",10.00,8) << endl;

    cout << "\nget items:" << endl
        << ((c->getMenuItem(0) == nullptr)? "null" : c->getMenuItem(0)->getDescription()) << endl
        << ((c->getMenuItem(1)== nullptr)? "null" : c->getMenuItem(0)->getDescription()) << endl
        << ((c->getMenuItem(2)== nullptr)? "null" : c->getMenuItem(0)->getDescription()) << endl;


    cout << "Recommended: ";
    c->recommendBeverage();

    cout << "\nprint items:\n";
    c->printMenuItems();
    cout << "\n inventory:\n";
    c->printInventory();

    delete c;
}

void testMenu(){

    cout<< "\n\n---Menu Class----Menu Class----Menu Class----Menu Class---\n";
    Menu* m = new Menu();
    cout << "Courses empty?: " << m->isCoursesEmpty() << endl;
    cout << "add Starter: " <<m->addCourse(new Starter(2)) << endl;
    cout << "add Starter: " <<m->addCourse(new Starter(4)) << endl;
    cout << "Insert Starter(Onion Soup):" << m->addMenuItem("Starter","Onion Soup",35.99,6) << endl;
    cout << "Insert Starter(Caesar Salad):" << m->addMenuItem("Starter","Caesar Salad",45.99,4)<< endl;
    cout << "Insert Starter(Onion Soup):" << m->addMenuItem("Starter","Onion Soup",35.99,3)<< endl;

    cout << "\nadd MainCourse: " <<m->addCourse(new MainCourse(3)) << endl;
    cout << "Insert Main(Steak):" << m->addMenuItem("Main","Steak",105.99,5)<< endl;
    cout << "Insert Main(Chicken):" << m->addMenuItem("Main","Chicken",95.99,2)<< endl;
    cout << "Insert Main(Fish):" << m->addMenuItem("Main","Fish",85.99,3)<< endl;

    cout << "\nadd Dessert: " << m->addCourse(new Dessert(1)) << endl;
    cout << "Insert Dessert(Ice Cream):" << m->addMenuItem("Dessert", "Ice Cream", 65.99, 7)<< endl;
    cout << "Insert Dessert(Ice Cream):" << m->addMenuItem("Dessert", "Ice Cream", 65.99, 7)<< endl;
    
    cout <<"\n\nMenu:\n";
    m->printMenu();
    cout <<"\n\nInventory:\n";
    m->inventory();

    cout << "\norder Main (a): " << m->orderItem("Main",'b')<< endl;
    cout << "\norder Main (a): " << m->orderItem("Main",'b')<< endl;
    cout << "\norder Main (a): " << m->orderItem("Main",'b')<< endl;
    cout << "\norder Dessert (a): " << m->orderItem("Dessert",'a')<< endl;
    cout <<"\n\nInventory:\n";
    m->inventory();
    cout << "Courses empty?: " << m->isCoursesEmpty() << endl;
    
    m->closeShop();
    cout << "\nCourses empty?: " << m->isCoursesEmpty() << endl;
    

}
