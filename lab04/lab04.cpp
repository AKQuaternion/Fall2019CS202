// lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	while (true) {
		int x;
		cout << "Enter a number, negative to quit. ";
		cin >> x;
		if (x < 0)
			break;
	}

	return 0;
}

