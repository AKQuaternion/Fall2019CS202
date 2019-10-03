#include <iostream>
using std::cout;
using std::endl;

#include "MyInt.hpp"

int main() {
  MyInt a{13};
  MyInt b{2};
  cout << a+b << endl;
  cout << a+5 << endl;
  cout << 5+a << endl;
  cout << "Testing += \n";
  a += b;
  cout << a << endl;
  return 0;
}