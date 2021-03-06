/*
Added support for parentheses in  WFF calculator from assignment 1
*/

// CIS 7 Assignment 2 Part 2
// Programmer: Yulin Zhang

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str = "";
	char again = 'Y';
	char chars[] = "() ";
	int pcounter = 0;
	bool wff = 1;

	while (again == 'Y')
	{
		cout << "Enter a new string (^, V, !, A-Z, capital letters only):";
		getline(cin, str);

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ')') pcounter--;
			if (str[i] == '(') pcounter++;
			if (pcounter < 0)
			{
				wff = 0;
				break;
			}
		}

		for (int i = 0; i < strlen(chars); ++i)
		{
			str.erase(remove(str.begin(), str.end(), chars[i]), str.end());
		}

		if ((str[0] < 'A') || (str[0] > 'Z') || (str.length() < 3)) wff = 0;
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

		if (pcounter != 0) wff = 0;
		if (wff) cout << "WFF!" << endl;
		else cout << "Not a WFF!" << endl;

		cout << "Enter Y to enter another string, enter anything else to quit:";
		cin >> again;
		cin.ignore();
	}

	return 0;
}
