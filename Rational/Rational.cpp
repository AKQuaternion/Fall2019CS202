//
// Created by Chris Hartman on 10/10/19.
//

#include "Rational.hpp"

Rational::Rational(int num, int den) {
  if (num < 0) {
    _num = -num;
    _neg = true;
  } else {
    _num = num;
    _neg = false;
  }
  if (den < 0) {
    _den = -den;
    _neg = !_neg;
  } else
    _den = den;
}

unsigned int Rational::getNumerator() const { return _num; }
unsigned int Rational::getDenominator() const { return _den; }

bool Rational::isNegative() const { return _neg; }

// Canonical
Rational &Rational::operator+=(const Rational &rhs) {
  return *this = *this + rhs;
}

Rational &Rational::operator*=(const Rational &rhs) {
  _num *= rhs._num;
  _den *= rhs._den;
  _neg ^= rhs._neg;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Rational &r) {
  if (r.isNegative())
    os << "-";
  os << r.getNumerator();
  if (r.getDenominator() != 1)
    os << "/" << r.getDenominator();
  return os;
}

Rational operator+(const Rational &lhs, const Rational &rhs) {
  int firstPart = lhs.getNumerator() * rhs.getDenominator();

  if (lhs.isNegative())
    firstPart *= -1;

  int secondPart = lhs.getDenominator() * rhs.getNumerator();

  if (rhs.isNegative())
    secondPart *= -1;

  return Rational{
      firstPart + secondPart,
      static_cast<int>(lhs.getDenominator() * rhs.getDenominator())};
}

// Canonical
Rational operator*(Rational lhs, const Rational &rhs) { return lhs *= rhs; }
