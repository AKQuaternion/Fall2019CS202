#include <iostream>
using std::cout;
using std::endl;
#include "TwoOf.hpp"

int main() {
  TwoOf<int> demo{1,13};
  auto demoDouble = makeTwoOf(1.1,5.5);

  cout << demo << " and " << demoDouble << endl;
  return 0;
}