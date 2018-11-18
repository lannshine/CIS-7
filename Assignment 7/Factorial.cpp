#include <iostream>
using namespace std;

int fact(int);

int main()
{
	int input;
	cout << "Enter an integer: ";
	cin >> input;
	cout << "The factorial is " << fact(input) << endl;

	return 0;
}


int fact(int n)
{
	if (n <= 0) return 1;
	return n * fact(n - 1);
}
