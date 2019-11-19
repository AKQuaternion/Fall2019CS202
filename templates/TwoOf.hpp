//
// Created by Chris Hartman on 11/19/19.
//

#ifndef TEMPLATES_TWOOF_HPP
#define TEMPLATES_TWOOF_HPP

template <typename T>
class TwoOf {
public:
  TwoOf(const T & first, const T & second);
private:
  T _first;
  T _second;
};

template <typename T>
TwoOf<T>::TwoOf(const T &first, const T &second) :_first(first), _second(second){
}
#endif // TEMPLATES_TWOOF_HPP
