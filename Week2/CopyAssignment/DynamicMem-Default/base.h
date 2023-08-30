#ifndef _BASE_H
#define _BASE_H

class MyClass{
 private:
  int *elem;

 public:
  MyClass();
  MyClass(int i);
  ~MyClass();
  void Print();
  int Value() const;
};


#endif