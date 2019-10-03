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

MyInt &MyInt::operator+=(const MyInt &rhs) {
  _val += rhs._val;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const MyInt &m) {
  os << m.getVal();
  return os;
}

MyInt operator+(const MyInt &lhs, const MyInt &rhs) { //canonical
  MyInt temp{lhs};
  temp += rhs;
  return temp;
}
