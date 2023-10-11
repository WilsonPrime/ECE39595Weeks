class ExampleClass {
private:
  int privateInt;
protected:
  int protectedInt;
public:
  int publicInt;
  void foo();
};

void ExampleClass::foo( ) {
  privateInt = 0;
  publicInt = 0;
  protectedInt = 0;
}  


class ExampleDerived : public ExampleClass {
public:
  void foo();
};

void ExampleDerived::foo( ) {
  //  privateInt = 0;
  publicInt = 0;
  protectedInt = 0;
}

int main(int argc, char* argv[ ]) {
  ExampleClass e;
  //  e.privateInt = 0;  // this doesn't work becuase only member functions (base/itself)(for privatecan change the private and protected values of the class
  e.publicInt = 0;
  //  e.protectedInt = 0; // this doesn't work becuase only member functions base and derived(for protected)can change the private and protected values of the class

}