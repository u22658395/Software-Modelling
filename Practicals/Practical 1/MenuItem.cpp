#include "MenuItem.h"

MenuItem::MenuItem(string description, float price, int stock){
    this->description = description;
    this->price = price;
    this->stock = stock;
}

string MenuItem::getDescription(){
    return this->description;
}

float MenuItem::getPrice(){
    return this->price;
}

int MenuItem::getStock(){
    return this->stock;
}

void MenuItem::reduceStock(){
    if(stock >=1)
    --stock; 
}
