#include <iostream>
using std::cout;

#include "Rational.hpp"

int main() {
  Rational r{1};
  cout << r << "\n";
  Rational oneHalf{1,2};
  cout << oneHalf << "\n";
  Rational minusOne{-1};
  cout << minusOne << "\n";
  Rational one{-1,-1};
  Rational minusOneAgain{1,-1};
  cout << one << " " << minusOneAgain << "\n";
  cout << "\n";
  cout << Rational{1,2} + Rational{1,3} << "\n";
  cout << Rational{-1,2} + Rational{1,3} << "\n";
  cout << Rational{1,2} + Rational{-1,3} << "\n";
  cout << Rational{-1,2} + Rational{-1,3} << "\n";

  one += Rational{1,3};
  cout << "One is now " << one << "\n";

  one *= Rational{3,4};
  cout << "One is now " << one << "\n";

  cout << oneHalf - oneHalf << "\n";
  cout << oneHalf / oneHalf << "\n";
  if (Rational(1,2) < Rational (1,3))
    cout << "1/2 < 1/3\n";

  if (Rational(1,3) < Rational (1,2))
    cout << "1/3 < 1/2\n";

  if (Rational(1,2) < Rational (1,2))
    cout << "1/2 < 1/2\n";

  if (Rational(1,2) == Rational (2,4))
    cout << "1/2 == 2/4\n";
  return 0;
}