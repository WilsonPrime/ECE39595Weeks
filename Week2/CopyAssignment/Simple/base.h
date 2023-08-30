#ifndef _BASE_H
#define _BASE_H

class MyClass{
 private:
  int index;

 public:
  MyClass();
  MyClass(int i);
  void Print();
  int Value() const;
};


#endif