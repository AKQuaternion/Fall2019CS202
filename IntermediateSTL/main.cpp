#include <iostream>
using std::cout;
using std::endl;
#include <deque>
#include <list>
#include <vector>
using std::deque;
using std::list;
using std::vector;

int main() {
  list<int> v{1, 2, 3, 4, 5};
  auto start = v.begin();
  ++start;
  auto finish = v.end();
  --finish;
  for (auto it = start; it != finish; ++it)
    cout << *it << " ";
  cout << endl;
  start = v.insert(start, 13);
  for (auto it = start; it != finish; ++it)
    cout << *it << " ";
  cout << endl;
  return 0;
}