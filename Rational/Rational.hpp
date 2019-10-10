//
// Created by Chris Hartman on 10/10/19.
//

#ifndef RATIONAL_RATIONAL_HPP
#define RATIONAL_RATIONAL_HPP

#include <iostream>

class Rational {
public:
  Rational(int num, int den = 1);
  unsigned int getNumerator() const;
  unsigned int getDenominator() const;
  bool isNegative() const;

private:
  unsigned int _num;
  unsigned int _den;
  bool _neg;
};

Rational operator+(const Rational &lhs, const Rational &rhs);

std::ostream &operator<<(std::ostream &os, const Rational &r);
#endif // RATIONAL_RATIONAL_HPP
