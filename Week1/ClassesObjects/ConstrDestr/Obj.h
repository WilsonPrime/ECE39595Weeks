class Obj{

private:
  int i;

public:
  void Print(void);
};

class ObjWithConstructor{

private:
  int i;

public:
  ObjWithConstructor(int);
  void Print(void);
};

class ObjWithDestructor{

private:
  int i;

public:
  void Print(void);
   ~ObjWithDestructor(void);
};