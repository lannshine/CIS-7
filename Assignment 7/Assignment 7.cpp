/*
Write a program that prints out step-by-step instructions for completing the Tower of Hanoi.

Requirements:

Asks the user for 1 integer indicating the number of disks to use. Then have the program solve the Tower of Hanoi problem recursively.
Have the program print out each move (for example: "Move disk from tower A to tower C")
If you are comfortable solving this using OOP, then:

Next have the program print out a visual representation of each tower in between moves. For instance, after the first move, the console could show:
Tower A: -,2,3
Tower B: -,-,-
Tower C: -,-,1
Move disk 1 to Tower C

After each move, wait for user input and clear the screen

If you are NOT comfortable solving this using OOP, then:

 Write another program that simply outputs the factorial of a given input
*/

#include <iostream>
using namespace std;

int getPositiveInt();
void towerOfHanoi(int, char, char, char);

int main()
{
	cout << "How many disk(s)? Enter a positive integer: ";
	int disk = getPositiveInt();
	towerOfHanoi(disk, 'A', 'C', 'B');

	return 0;
}

void towerOfHanoi(int disk, char from, char to, char spare)
{
	if (disk == 1)
	{
		cout << "\nMove disk 1 from rod " << from << " to rod " << to << endl;
		return;
	}
	towerOfHanoi(disk - 1, from, spare, to);
	cout << "\nMove disk " << disk << " from rod " << from << " to rod " << to << endl;
	towerOfHanoi(disk - 1, spare, to, from);
}

int getPositiveInt()
{
	float input;

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

	return (int)input;
}