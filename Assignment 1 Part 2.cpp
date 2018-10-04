/*
Part 1: Write a program in C++ that will parse a string and indicate whether or not it is a WFF (10 pts)

Prompt the user for a string input
Parse the string and indicate whether or not the string is a WFF
Allow the user to enter a new string or quit
Only the following input is allowed: ^, V, !, A-Z (capital letters only)
Part 2: If, Then support (10 pts)

Add support for the "->" connector
*/

// CIS 7 Assignment 1 Part 2
// Programmer: Yulin Zhang

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "";
	char again = 'Y';

	while (again == 'Y')
	{
		cout << "Enter a new string (^, V, !, A-Z, capital letters only):";
		cin >> str;
		bool wff = 1;

		if ((str[0] < 'A') || (str[0] > 'Z')||(str.length() < 3)) wff = 0;
		else
		{
			for (int i = 1; i < (str.length() - 1); i++)
			{
				if ((str[i] != 'V') && (str[i] != '^') && (str[i] != '!') && ((str[i] != '-') && (str[i + 1] != '>')))
				{
					wff = 0;
					break;
				}

				if (str[i] != '-')
				{
					if ((str[i + 1] < 'A') || (str[i + 1] > 'Z'))
					{
						wff = 0;
						break;
					}
					if ((str.length() - i) == 3)
					{
						wff = 0;
						break;
					}
				}
				else
				{
					if ((str[i + 2] < 'A') || (str[i + 2] > 'Z'))
					{
						wff = 0;
						break;
					}
					if ((str.length() - i) == 4) 
					{
						wff = 0;
						break;
					}
					i++;
				}

				i++;
			}
		}

		if (wff) cout << "WFF!" << endl;
		else cout << "Not a WFF!" << endl;

		cout << "Enter Y to enter another string, enter anything else to quit:";
		cin >> again;
	}

	return 0;
}