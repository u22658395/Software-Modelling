#include "Course.h"
#include "Menu.h"

Menu::Menu(){

}

bool Menu::addCourse(Course* course){
    if(course != NULL && course != nullptr){
        if(courses.find(course->getDescription()) != courses.end()){
            courses.insert({course->getDescription(), course});
            return true;
        }
    }

    return false;
}

bool Menu::addMenuItem(string courseDescription, string description, float price, int stock){
    if(courses.find(courseDescription) != courses.end()){
        courses.at(courseDescription)->addMenuItem(description,price,stock);
        return true;
    }
    return false;

}

void Menu::printMenu(){
    char c = 'a';
    for(std::map<std::string, Course*>::iterator it = courses.begin(); it != courses.end(); ++it){
        cout << it->first << endl;
        it->second->printMenuItems();
    }
}

void Menu::inventory(){
 char c = 'a';
    for(std::map<std::string, Course*>::iterator it = courses.begin(); it != courses.end(); ++it){
        cout << it->first << endl;
        it->second->printInventory();
    }
}


float Menu::orderItem(string courseDescription, char item){
    if(courses.find(courseDescription) != courses.end()){
        if(courses.at(courseDescription)->getMenuItem(item) != nullptr){
            courses.at(courseDescription)->getMenuItem(item)->reduceStock();
            return courses.at(courseDescription)->getMenuItem(item)->getPrice();
        }    
    }
    return 0;
}

bool Menu::isCoursesEmpty(){
    return (this->courses.size() == 0);
}

void Menu::closeShop(){
    cout << "Closing shop. Deleting all " << courses.size() << "courses\n";
    for(std::map<std::string, Course*>::iterator it = courses.begin(); it != courses.end(); ++it){
        delete it->second;
        it->second = NULL;
    }
    courses.clear();
}

Menu::~Menu(){

    cout<< "Menu destructor called\n";
    closeShop();
}
