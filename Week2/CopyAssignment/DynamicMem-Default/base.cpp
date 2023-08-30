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