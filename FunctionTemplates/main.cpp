#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

template <typename T, typename U>
void printTwo(const T & t, const U & u) {
  cout << t << " " << u;
}
int square(int x) {return x*x;}
int thirteen(int x) {return 13;}

template <typename Func>
void functionCaller(Func f) {
  cout << f(2) << f(3) << endl;
}

template<typename T>
void printTwice(const T&t) {
  cout << t << t << endl;
}

void printTwice(int x) {
  cout << "int" << x << x << endl;
}

int main() {
//  functionCaller(square);
//  functionCaller(thirteen);

printTwice(2);
printTwice(string("hello"));
//  auto x=3;
////  cout << x << endl;
//  printTwo<int,string>(2.2,string("hello"));
  return 0;
}