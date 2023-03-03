// n is even.cpp .


#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "enter number to check if it is even ";
	cin >> number;
	if (number % 2 == 0) {
		cout << number << " is even. ";
	}
	else {
		cout << number << " is odd. ";
	}
	return 0;
}

