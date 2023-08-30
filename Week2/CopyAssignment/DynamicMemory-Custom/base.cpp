#include <iostream>
#include "base.h"

MyClass::MyClass(){
  elem = new int;
  *elem = 0;
}

MyClass::MyClass(int i){
  elem = new int;
  *elem = i;
}


MyClass::MyClass(const MyClass& copyFrom){
  elem = new int;
  *elem = copyFrom.Value();
  std::cout << std::endl << "Copy" << std::endl;
}

/***
 Version 0:
 Below works for simple assignments, but will not work
 for assignments of the form a = b = c
 ****/

/*****
void MyClass::operator=(const MyClass& copyFrom){
  std::cout << std::endl << "Assignment" << std::endl;
  *elem = copyFrom.Value(); 
}
******/

/*******
 Version 1:
 Below implementation works.
 *No memory leaks.
 *It copies data
 *Works for a self-assignment
 *Both objects (assigned from, and assigned to) have their own pointers.
 ********/


const MyClass& MyClass::operator=(const MyClass& copyFrom){
  std::cout << std::endl << "Assignment" << std::endl;
  *elem = copyFrom.Value(); 
  return *this;
}


/********
 Version 2:
 A more involved way to implement the assignment operator
 that also works. This is useful to understand, and may be useful 
 in some cases (hint linked list lab).
 ********/

/*****
const MyClass& MyClass::operator=(const MyClass& copyFrom){
  if(this == &copyFrom) 
    return *this;  // handles self-test.
  delete elem;  // get rid of old memory for object in earlier state.
  elem= new int; // allocate memory for new state.
  *elem = copyFrom.Value(); // properly set new state.
  return *this;
}
******/

/******
 Version 3:
 This example illustrates the swap and copy paradigm.
 This could be another approach to handle the linked list lab.
********/

/*****

const MyClass& MyClass::operator=(const MyClass& copyFrom){

  // temporary object. uses copy constructor. Creates memory.
  MyClass tmpObj=MyClass(copyFrom); 

  // We swap where this object and temporary object's elem pointers point to.
  int *ptr;
  ptr = this->elem;
  this->elem = tmpObj.elem;
  tmpObj.elem =ptr;

  //The current object now has everything set up properly.
  //We don't need to delete the memory originally corresponding to the current object.
  //This is because tmpObj now owns that memory, and a destructor would automatically
  //be invoked when we exit this function.

  return *this;

}

*******/

MyClass::~MyClass(){
  std::cout << "Delete " << ' ' << elem << std::endl;
  delete elem;
}

int MyClass::Value() const{
  return *elem;
}

void MyClass::Print(){
  std::cout << *elem;
}