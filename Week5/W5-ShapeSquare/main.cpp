#include "Square.h"
#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

void SimpleTests(){
  //  Shape shape; Will not compile
  Square square(4);

  Shape *shape; // Allowed
  shape = new Square(7); //Allowed: upcasting: a square is a shape.
  
  cout << "Length = " << square.length()
       << " Area = " << square.area() 
       << " Circumference = " << square.circumference() 
       << endl;

  //  cout << "Length = " << shape->length() // Not Allowed; shape is a base class.

  cout << "Area = " << shape->area() 
       << " Circumference = " << shape->circumference() 
       << endl;
}




void CompoundShapes(){

      Shape* shapes[2];
  
    shapes[0] = new Circle(5);
    shapes[1] = new Square(7);

   cout << shapes[0]->area();
   cout <<  shapes[0]->circumference();

    cout << shapes[1]->area();
    cout << shapes[1]->circumference();


}


int main() {
  SimpleTests();
  CompoundShapes();
}
