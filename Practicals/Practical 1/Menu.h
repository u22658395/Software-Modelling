
#ifndef MENU_H
#define MENU_H

#include "Course.h"

#include<iostream>
#include<map>
using namespace std;

class Menu{
    public:
        Menu();
        bool addCourse(Course* course);
        bool addMenuItem(string courseDescription, string description, float price, int stock);
        void printMenu();
        void inventory();
        float orderItem(string courseDescription, char item);
        bool isCoursesEmpty();
        void closeShop();
        virtual ~Menu();

    private:
        map<string, Course*> courses;
};
#endif
