#include <iostream>
using namespace std;

void calculations()
{
	

	float first = 0.f;
	float second = 0.f;
	cout << "Enter the first number: " << endl;
	cin >> first;


	if (cin.fail())
	{
		cout << "You did not enter an integer. ";
		cout << "5 is the integer we will use. ";
		first = 5;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail()); //This function string throws away everything stored in the function (That was previously entered)

	}
	cout << "Enter the second number: " << endl;
	
	cin >> second; 
	
	if (cin.fail())
	{
		cout << "You did not enter an integer. 47 will be used instead" << endl;
		second = 47; 
			cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	}
	cout << "The two numbers entered are: " << first << " and " << second << "." << endl;
	cout << first << " + " << second << " = " << (first + second) << endl;
	cout << first << " - " << second << " = " << (first - second) << endl;
	cout << first << " * " << second << " = " << (first * second) << endl;
	cout << first << " / " << second << " = " << (first / second) << endl;
	//cout << first << " % " << second << " = " << (first % second) << endl;
}

int main()
{
	calculations();
	return 0;
}