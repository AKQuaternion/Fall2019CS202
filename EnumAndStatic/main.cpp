#include <iostream>
using std::cout;
using std::endl;

void foo() {
  int y;
  static int x=0;
  cout << ++x << endl;
  y = 13;
}

void bar() {
  int f=55;
  cout << "In bar, f is " << f << endl;
}

int main() {
  foo();
  bar();
  foo();
  std::cout << "Hello, World!" << std::endl;
}