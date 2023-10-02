#include "Item.h"
#include <iostream>


void ExampleTests(){

  int numItems = Item::getNumberOfItems();
  std::cout << "numItems = " << numItems << std::endl;


  Item *iP1 = new Item(4, 6.50);
  iP1->print( );

  Item *iP2 = new Item(5, 7.50);
  iP1->print( );
  iP2->print();

  delete iP2;
  iP1->print( );

  
  int i = iP1->getNumberOfItems();
  std::cout << "Check!" << i << std::endl;

  numItems = Item::getNumberOfItems();
  std::cout << "numItems = " << numItems << std::endl;

  delete iP1;
  
  numItems = Item::getNumberOfItems();
  std::cout << "numItems = " << numItems << std::endl;

}

void Test(Item item){
  std::cout << "numItems = " << Item::getNumberOfItems() << std::endl;
}

void MoreTests(){
  Item item(18,34);
  std::cout << "numItems = " << Item::getNumberOfItems() << std::endl;

  Test(item);
  std::cout << "numItems = " << Item::getNumberOfItems() << std::endl;
}

int main (int argc, char *argv[]) { 
  std::cout << "Started Example Tests " << std::endl;
  ExampleTests();
  std::cout << "Completed Example Tests " << std::endl << std::endl;

   MoreTests();
  std::cout << "Completed More Tests " << std::endl;
}