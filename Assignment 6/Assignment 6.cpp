/*
	Write a program in C++ that calculates the GCD of two numbers
	using the Euclidean algorithm.

	Requirements:

	Allow the user to input both numbers
	Validate that the numbers are positive integers
	Display the amount of time it took to calculate the GCD
	(hint: use the system clock)
	Afterwards, ask the user if they want to re-run the program
 */

#include <iostream>
#include <ctime>
#include <limits>
#include <cstdio>
using namespace std;

long getPositiveIntNumber();
long EuclideanAlgorithm(int, int);

int main()
{
	long a, b;
	cout << "This is a GCD calculator." << endl;
	bool cont = 1;
	char input;
	clock_t start;
	clock_t stop;
	double duration;

	do
	{
		cout << "\nEnter the first positive integer: ";
		a = getPositiveIntNumber();

		cout << "Enter the second positive integer: ";
		b = getPositiveIntNumber();

		start = clock();
		cout << "\nYou entered " << a << " and " << b << "\n";		
		cout << "The GCD is " << EuclideanAlgorithm(a, b) << "." << endl;
		stop = clock();
		duration = (stop - start) / (double)CLOCKS_PER_SEC;
		cout << "The calculation took " << duration <<"s" << endl;

		cout << "Enter n to quit, enter anything else to run the GCD calculator again:" << endl;
		cin >> input;
		if (tolower(input) == 'n') cont = 0;
	} while (cont);
	
	return 0;	
}

long getPositiveIntNumber()
{
	double input;

	do
	{
		bool validInput;

		cin >> input;
		validInput = cin.good();

		if (validInput)
		{
			if (input - ((int)input) > 0)
				cout << "Invalid Entry! Number needs to be an integer.\n"
					 << "Enter a positive integer: ";
			else if (input <= 0)
				 cout << "Invalid Entry! Number needs to be positive.\n"
					  << "Enter a positive integer: ";
				 else break;
		}
		else
		{
			cout << "Invalid Entry!\nEnter a positive integer: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (true);

	return (long)input;
}

long EuclideanAlgorithm(int a, int b)
{
	int r = 0;
	r = a % b;
	if (r != 0) r = EuclideanAlgorithm(b, r);
	else return b;
}