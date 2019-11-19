//
// Created by Chris Hartman on 11/19/19.
//

#ifndef TEMPLATES_TWOOF_HPP
#define TEMPLATES_TWOOF_HPP
#include <iostream>

template <typename T>
class TwoOf {
  template<typename U>
  friend std::ostream & operator<<(std::ostream &, const TwoOf<U> &);
public:
  TwoOf(const T & first, const T & second);
private:
  T _first;
  T _second;
};

template <typename T>
TwoOf<T>::TwoOf(const T &first, const T &second) :_first(first), _second(second){
}

template <typename T>
TwoOf<T> makeTwoOf(const T & first, const T & second) {
  return TwoOf<T>(first,second);
}

template<typename U>
std::ostream & operator<<(std::ostream &os, const TwoOf<U> &to) {
  os << to._first << " " << to._second;
  return os;
}
#endif // TEMPLATES_TWOOF_HPP
