#include "Item.h"
#include <iostream>

int Item::getNumberOfItems( ) {
  //std::cout << itemNum << std::endl;
  return numberOfItems;
}

int Item::getTotal(){
    return total;
}

Item::Item(int i, float p) : itemNum(i), price(p) {
   numberOfItems++;
   total++;
}


Item::Item(const Item& item){ // copy consturctor 
   this->itemNum = item.itemNum;
   this->price = item.price;
   numberOfItems++;
   total++;
}


Item::Item( ) { // this will get called 2 times since it constructed it in the initilizer list 
  numberOfItems++;
  total++;
 }

Item::~Item( ) {
  numberOfItems--;
  total--;
}

void Item::print( ) {
   std::cout << "number of items: " << numberOfItems;
   std::cout << ", item number: " << itemNum;
   std::cout << ", price: " << price << std::endl;
}








// stuff for ItemD

ItemD::ItemD( ) {
  numberOfItems++;
  incrementBaseTotal();

 }

ItemD::~ItemD( ) {
  numberOfItems--;
  decrementBaseTotal();
}

int ItemD::getNumberOfItems( ) {
  //std::cout << itemNum << std::endl;
  return numberOfItems;
}

/*int ItemD::getTotal(){
    return total;
}*/

void ItemD::incrementBaseTotal(){
    Item::incrementBaseTotal();
}

void ItemD::decrementBaseTotal(){
    Item::decrementBaseTotal();
}

void ItemD::print( ) {
   std::cout << "number of items: " << numberOfItems;
   std::cout << ", item number: " << itemNum;
   std::cout << ", price: " << price << std::endl;
}

ItemD::ItemD(int i, float p) : itemNum(i), price(p) { // increments the static variable in the derived class
   numberOfItems++;
   Item::incrementBaseTotal();
}

/*ItemD::ItemD(const ItemD& item){ // copy consturctor 
   this->itemNum = item.itemNum;
   this->price = item.price;
   numberOfItems++;
}*/






int Item::numberOfItems = 0; // initialize statics like this
int ItemD::numberOfItems = 0;
int Item::total = 0;