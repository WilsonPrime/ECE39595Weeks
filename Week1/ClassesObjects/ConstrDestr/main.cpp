#include <iostream>
#include "Obj.h"

void foo(){
  ObjWithDestructor m;

}

int main(){
  Obj a,b,c,d,e; //Default constructor invoked. Unknown values

  std::cout << " \n Printing info for Obj variables..." << std::endl;

  a.Print();
  b.Print();
  c.Print();
  d.Print();
  e.Print();

  // ObjWithConstructor p,q,r,s,t; //Not allowed. Since constructor has been
                                   //defined which requires an argument, cannot
                                   //invoke default constructor without args.

  ObjWithConstructor p(0),q(1),r(2),s(3),t(4); //Correctly initialized.

  std::cout << "\n Printing info for ObjWithConstructor variables..." << std::endl;

  p.Print();
  q.Print();
  r.Print();
  s.Print();
  t.Print();

  std::cout << "\n Before foo:" << std::endl;
  foo();
  std::cout << "\n After foo:" << std::endl;
}