#include "Course.h"
#include "Dessert.h"
#include "MainCourse.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Starter.h"

void testMenuItem();

int main(int argc, char const *argv[])
{
    testMenuItem();
    return 0; 
}


/*function implementations---------function implementations---------function implementations---------*/
void testMenuItem(){
    MenuItem mi("hi", 11.0, 2);
    cout << "getDescription "<< mi.getDescription() << endl;
    cout << "getPrice "<< mi.getPrice() << endl;
    cout << "getStock "<< mi.getStock() << endl;
}