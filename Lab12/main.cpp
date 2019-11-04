#include <iostream>
using std::cout;

class Base {
public:
  virtual void fooVirtual() const { cout << "Base class virtual foo\n"; }
  void fooNotVirtual() const { cout << "Base class non-virtual foo\n"; }
};

class Derived : public Base {
public:
  void fooVirtual() override const { cout << "Base class virtual foo\n"; }
  void fooNotVirtual() const { cout << "Base class non-virtual foo\n"; }
};

int main() {
Base b;
// declare a Derived class object here.

//  A base class pointer to the base class object.
Base *bPb = &b;

//  A base class pointer to the derived class object.
//  A derived class pointer to the derived class object.
//  A base class reference to the base class object.
//  A base class reference to the derived class object.
//  A derived class reference to the derived class object.

cout << "Calling non-virtual function from Base class pointer to base: ";
bPb->fooNotVirtual();

cout << "Calling virtual function from Base class pointer to base: ";
  bPb->fooVirtual();
  return 0;
}