//
// Created by Chris Hartman on 10/3/19.
//

#ifndef OVERLOADEDOPERATORS_MYINT_HPP
#define OVERLOADEDOPERATORS_MYINT_HPP
#include <iostream>

class MyInt {
public:
  MyInt(int);
  int getVal() const;
  MyInt & operator+=(const MyInt &rhs);
private:
  int _val;
};

std::ostream & operator<<(std::ostream &, const MyInt &);
MyInt operator+(const MyInt &, const MyInt &);
#endif // OVERLOADEDOPERATORS_MYINT_HPP
