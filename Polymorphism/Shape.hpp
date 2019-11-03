//
// Created by Chris Hartman on 11/3/19.
//

#ifndef POLYMORPHISM_SHAPE_HPP
#define POLYMORPHISM_SHAPE_HPP

#include <memory> // for unique_ptr and make_unique

class Shape {
public:
  virtual void describe() = 0; // pure virtual function
};

class Circle : public Shape {
public:
  void describe() override; // describe is virtual in the base class, so it
  // is virtual here. You do not need to repeat the virtual keyword. But you
  // should use the "= override" as above. This will let the compiler warn you
  // if you do something wrong. What happens if you make the above function
  // const (as it really should be!?)
};

class Square : public Shape {
public:
  void describe() override;
};

std::unique_ptr<Shape> getShape(char c);
#endif // POLYMORPHISM_SHAPE_HPP
