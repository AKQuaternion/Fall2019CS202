//
// Created by Chris Hartman on 10/10/19.
//

#ifndef RATIONAL_RATIONAL_HPP
#define RATIONAL_RATIONAL_HPP

#include <iostream>

class Rational {
  friend Rational operator-(const Rational &lhs, const Rational &rhs);
  friend bool operator<(const Rational &lhs, const Rational &rhs);
  friend bool operator==(const Rational &lhs, const Rational &rhs);

public:
  Rational(int num, int den = 1);
  unsigned int getNumerator() const;
  unsigned int getDenominator() const;
  bool isNegative() const;
  Rational &operator+=(const Rational &rhs);
  Rational &operator*=(const Rational &rhs);
  Rational &operator-=(const Rational &rhs);
  Rational &operator/=(const Rational &rhs);

private:
  int gcd(int x, int y) const;
  void reduce();
  unsigned int _num;
  unsigned int _den;
  bool _neg;
};

Rational operator+(const Rational &lhs, const Rational &rhs);
Rational operator*(Rational lhs, const Rational &rhs);
Rational operator/(Rational lhs, const Rational &rhs);
bool operator>(const Rational &lhs, const Rational &rhs);
bool operator<=(const Rational &lhs, const Rational &rhs);
bool operator>=(const Rational &lhs, const Rational &rhs);
bool operator!=(const Rational &lhs, const Rational &rhs);

std::ostream &operator<<(std::ostream &os, const Rational &r);
#endif // RATIONAL_RATIONAL_HPP
