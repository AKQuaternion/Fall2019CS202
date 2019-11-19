// lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ofstream;
#include <vector>

int getInput() {
  int total = 0;
  while (true) {
    int x;
    cout << "Enter a number or more on one line, negative to quit. ";
    string userInput;
    getline(cin, userInput);
    istringstream uin(userInput);
    while (true) {
      uin >> x;
      if (!uin) {
        if (uin.eof()) {
          break;
        }
        cout << "Improper input, ignoring rest of line.\n";
        uin.clear();
        uin.ignore(999, '\n');
        continue;
      }
      if (x < 0)
        return total;
      total += x;
    }
  }
}

void doRow(int i,int j) {
  for(int k=0;k<3;++k)
    cout << "doing piece " << i << " " << j << " " << k << endl;
}

void doSlice(int i) {
  for(int j=0;j<3;++j)
    doRow(i,j);
}

void doCube() {
  for(int i=0;i<3;++i)
    doSlice(i);
}

using std::vector;

template <typename T>
void printVec(vector<T> v) {
  for (const auto &t:v)
    cout << t << " ";
  cout << endl;
}

int main()
{
  vector<double> d{1.1,2.2,3,3};;
  vector<int> i{13,14,15};
  printVec(d);
  printVec(i);
  return 0;
}

