#include "base.h"
#include <iostream>

void InvokeCopyConstructor(){
 
  MyClass a(5);

  // All the expressions below invoke the copy constructor 
  MyClass b(a);
  MyClass c = a;
  MyClass d = MyClass(a);
  MyClass *ptr= new MyClass(a);

  std::cout << a.Value() << ' ' << b.Value() << ' ' << c.Value() << ' ' 
	    << d.Value() << ' ' << ptr->Value() << std::endl;

  delete ptr;
}

void InvokeAssignmentOperator(){
  MyClass a(5);
  MyClass b(10);
  MyClass c(15);
  MyClass d(20);

  std::cout << a.Value() << ' ' << b.Value() << ' ' 
	    << c.Value() << ' ' << d.Value() << ' ' 
	    << std::endl;

  d=a; // Basic assignment operator.
  b=b; // Self assignment. Should work if implemented correctly.
  c=b=a; // Multiple assignment operators should work in an associative fashion.

  std::cout << a.Value() << ' ' << b.Value() << ' ' 
	    << c.Value() << ' ' << d.Value() << ' ' 
	    << std::endl;

}

int main(void){
  InvokeCopyConstructor();
  InvokeAssignmentOperator();
}