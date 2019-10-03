//
// Created by Chris Hartman on 10/3/19.
//

#include "MyInt.hpp"
using std::ostream;

MyInt::MyInt(int val) :_val(val)
{}

int MyInt::getVal() const {
  return _val;
}

std::ostream &operator<<(std::ostream &os, const MyInt &m) {
  os << m.getVal();
  return os;
}

MyInt operator+(const MyInt &lhs, const MyInt &rhs) {
  return MyInt{lhs.getVal()+rhs.getVal()};
}
