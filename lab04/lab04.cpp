// lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int total = 0;
	while (true) {
		int x;
		cout << "Enter a number, negative to quit. ";
		cin >> x;
		if (!cin) {
			cout << "That wasn't a number.\n";
			cin.clear();
			cin.ignore(999, '\n');
			continue;
		}
		if (x < 0)
			break;
		total += x;
	}

	cout << "Your total was " << total << endl;
	return 0;
}

