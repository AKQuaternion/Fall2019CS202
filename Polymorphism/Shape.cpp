//
// Created by Chris Hartman on 11/3/19.
//

#include "Shape.hpp"
#include <iostream>
using std::cout;
#include <random>

void Circle::describe() { cout << "I am a circle.\n"; }

void Square::describe() { cout << "I am a square.\n"; }

std::unique_ptr<Shape> getShape(char c) {
  static std::random_device r(time(0));
  static std::default_random_engine e1(r());
  static std::uniform_int_distribution<int> flip(0, 1);

  switch (c) {
  case 's':
  case 'S':
    return std::make_unique<Square>();
  case 'c':
  case 'C':
    return std::make_unique<Circle>();
  case 'r':
  case 'R':
    if (flip(e1) == 0)
      return std::make_unique<Square>();
    else
      return std::make_unique<Circle>();
  }
}