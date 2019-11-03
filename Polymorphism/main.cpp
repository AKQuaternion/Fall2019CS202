#include <iostream>
using std::cout;

#include "Shape.hpp"
int main() {
  //  Shape s; // This shouldn't compile, because
  // Shape has a pure virtual function (which makes Shape an abstract class.)
  // Try putting this line back in!!!

  Circle c;
  c.describe();

  Shape *sPtr = &c; // Base class pointers can point at derived classes
  sPtr->describe(); // But the object is really still a circle.

  auto square = getShape('s'); // square is a unique_ptr<Shape>
  square->describe();

  auto circle = getShape('c'); // circle is a unique_ptr<Shape>
  circle->describe();

  auto iDunnoWhatIAm = getShape('r'); // iDunnoWhatIAm is a unique_ptr<Shape>
  iDunnoWhatIAm->describe();

  return 0;
}