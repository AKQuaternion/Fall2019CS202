//
// Created by Chris Hartman on 10/8/19.
//

#ifndef ENUMANDSTATIC_FOO_HPP
#define ENUMANDSTATIC_FOO_HPP

class Foo {
public:
  static int getN() {
    return n;
  }
private:
  static int n;
};

#endif // ENUMANDSTATIC_FOO_HPP
