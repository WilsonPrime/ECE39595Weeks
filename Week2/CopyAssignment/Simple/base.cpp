#include <iostream>
#include "base.h"

MyClass::MyClass(){
  index = 0;
}

MyClass::MyClass(int i){
  index = i;
}


int MyClass::Value() const{
  return index;
}

void MyClass::Print(){
  std::cout << index;
}