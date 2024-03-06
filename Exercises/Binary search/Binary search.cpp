#include <iostream>
#include <algorithm>
#include <vector>
#include "StringUtil.h"
#include "StringUtil.cpp"
using namespace std;

int binarySearch(vector<StringUtil> list, StringUtil target);

bool stringSort(StringUtil lhs, StringUtil rhs)
{
	return lhs < rhs;
}

int main()
{
	vector<StringUtil> list;
	
	StringUtil string1 = "amblle";
	StringUtil string2 = "hamburbgder";
	StringUtil string3 = "homdob";
	StringUtil string4 = "orangme";
	StringUtil string5 = "pleroa";
	StringUtil string6 = "pikacho";
	StringUtil string7 = "chimken pargeman";
	StringUtil string8 = "plorgo";
	StringUtil string9 = "heer";

	list.push_back(string1);
	list.push_back(string2);
	list.push_back(string3);
	list.push_back(string4);
	list.push_back(string5);
	list.push_back(string6);
	list.push_back(string7);
	list.push_back(string8);
	list.push_back(string9);


	sort(list.begin(), list.end());

	StringUtil target = "homdob";

	cout << binarySearch(list, target) << endl;
}



int binarySearch(vector<StringUtil> list, StringUtil target)
{
	int L = 0;
	int R = size(list) - 1;

	while (L <= R)
	{
		int mid = (L + R) / 2;
		if (list[mid] == target.CStr())
		{
			return mid;
		}
		else if (list[mid] < target.CStr())
		{
			L = mid + 1;
		}
		else if (list[mid] > target.CStr())
		{
			R = mid - 1;
		}
		else
		{
			cout << "how." << endl;
		}
	}
	return -1;
}