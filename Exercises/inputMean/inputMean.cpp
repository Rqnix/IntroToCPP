#include <iostream>
using namespace std;
float inputMean();
//A loop that accepts user inputs from the user until they press q
//Then print the total number of integers input and their average value

int main()
{
	inputMean();
}

float inputMean()
{
	int count = 0;
	float x = 0;
	float total = 0;
	bool hasfailed = false;
	char currentChar = '.';

	while (hasfailed != true)
	{
		cout << "Input a number of your choice " << endl; 
		cin >> x;
		if (cin.fail()) //If the input is not a number
		{
			cin.clear();
			cin >> currentChar;
			if (currentChar == 'q') 
			{
				hasfailed = true;
			}
			else
			{
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
				cout << "invalid input, try again." << endl;
				continue;
			}

		}
		else
		{
			total += x;
			count++;
		}
		


	}
	if (count > 0)
	{
		cout << "The total value of inputs was " << total << endl;
		cout << "Total number of inputs was " << count << endl;
		cout << "The average of all inputs was " << total / count << endl;
		return 0.f;
	}
	else
	{
		cout << "No valid inputs detected" << endl;
	}
	
}