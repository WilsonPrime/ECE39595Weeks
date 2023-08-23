#include <iostream>
#include "Obj.h"

void Obj::Print(void){
  std::cout << i << std::endl;
}

ObjWithConstructor::ObjWithConstructor(int _i){
  i=_i;
}

void ObjWithConstructor::Print(void){
  std::cout << i << std::endl;
}

void ObjWithDestructor::Print(void){
  std::cout << i << std::endl;
}

ObjWithDestructor::~ObjWithDestructor(void){
  std::cout << "Entered destructor" << std::endl;
}