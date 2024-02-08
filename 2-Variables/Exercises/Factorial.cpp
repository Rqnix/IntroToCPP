#include <iostream>
using namespace std;

extern int factorial()
{
	int total = 1;
	int n = 3;

	cout << "What number do you want the factorial of? ";
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		total *= i;
	}
	cout << "The factorial is " << total << endl; 
	return 0;
}