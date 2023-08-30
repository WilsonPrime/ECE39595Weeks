#include "base.h"
#include <iostream>

void InvokeCopyConstructor(){
 
  MyClass a(5);

  // Invokes the copy constructor 
  MyClass b(a);

  std::cout << a.Value() << ' ' << b.Value() << std::endl;


}

void InvokeAssignmentOperator(){
  MyClass a(5);
  MyClass b(10);


  std::cout << a.Value() << ' ' << b.Value() << std::endl;

  b=a; 

  std::cout << a.Value() << ' ' << b.Value() << ' '  << std::endl;

}

int main(void){
  InvokeCopyConstructor();
  InvokeAssignmentOperator();
}