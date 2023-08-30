#ifndef _BASE_H
#define _BASE_H

class MyClass{
 private:
  int *elem;

 public:
  MyClass();
  MyClass(int i);
  MyClass(const MyClass&);
  // void operator=(const MyClass&);
  const MyClass &operator=(const MyClass&);
  ~MyClass();
  void Print();
  int Value() const;
};


#endif