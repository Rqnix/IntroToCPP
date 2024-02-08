#include <iostream>
using namespace std;


extern int goldRatio()
{
	int n = 5;
	int x1 = 1;
	int x2 = 0;
	int total = 0;
	
	cout << "What number in the fibonacci sequence do you want? " << endl;
	cin >> n;
	
	if (n == 1)
	{
		cout << total << endl;
	}
	else if (n == 2)
	{
		cout << total << endl;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			total = x1 + x2;
			x2 = x1;
			x1 = total;
		}
		cout << total << endl;
	}
	

	return total;
}