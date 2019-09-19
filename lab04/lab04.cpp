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

void getInput() {
	int total = 0;
	bool keepGoing = true;
	while (keepGoing) {
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
			if (x < 0) {
				keepGoing = false;
				break;
			}
			total += x;
		}
	}

	cout << "Your total was " << total << endl;
}

int main()
{
	ofstream ofile("output.txt",std::ios::app);
	ofile << "Hi world.\n";
	return 0;
}

