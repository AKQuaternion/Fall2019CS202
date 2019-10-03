#include <iostream>
using std::cout;
using std::endl;

#include "MyInt.hpp"

int main() {
  MyInt a{13};
  MyInt b{2};
  cout << a+b << endl;

  return 0;
}