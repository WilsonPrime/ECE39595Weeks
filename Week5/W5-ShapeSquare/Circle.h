#include "Shape.h"

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle : public Shape {
public:
   Circle(float);
   ~Circle( );
   double area( );
   double circumference();
   float GetRadius();
private:
   float radius;
};
#endif 
