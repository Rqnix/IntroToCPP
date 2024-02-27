#include <iostream>
#include "StringUtil.h"
#include <ctype.h>
using namespace std;

int main()
{
	char array[] = "hawaiian hamburger";
	StringUtil String1 = array;

	cout << "Length function (should be 19) " << String1.Length() << endl;
	cout << "CharacterAt function at the second index (should be a) " << String1.CharacterAt(1) << endl;
	cout << "EqualTo function comparing if char array is equal to cheeseburger (should be false) " << String1.EqualTo("cheeseburger") << endl;
	cout << "Append function (should be hawaiian hamburgers) " << String1.Append("s") << endl;
	cout << "Prepend function (should be not a hawaiian hamburgers) " << String1.Prepend("not a ") << endl;
	cout << "C String function  (should return current string) " << String1.CStr() << endl;
	cout << "ToUpper function (should make everything uppercase) " << String1.ToUpper() << endl;
	cout << "ToLower function (should make everything lowercase) " << String1.ToLower() << endl;
	cout << "Find function (should find ham from index 0) " << String1.Find("ham") << endl;
	cout << "Find (from index) function (should find ham from index 3) " << String1.Find(3, "ham") << endl;
	cout << "Replace function (should replace ham with badham) " << String1.Replace("ham", "badham") << endl;
	cout << "ReadFromConsole function (should take input fron console and output it) " << String1.ReadFromConsole() << endl;
	cout << "WriteToConsole function (should output current word stored; should be same as readfromconsole) " << String1.WriteToConsole() << endl;


	if (String1 == "hello")
	{
		cout << "string is equal to inputted string (==)" << endl;
	}
	else
	{
		cout << "string is not equal to inputted string (==)" << endl;
	}

	if (String1 != "hello")
	{
		cout << "string is not equal to inputted string (!= operator)" << endl;
	}
	else
	{
		cout << "string is equal to inputted string (!= operator)" << endl;
	
	}

	if (String1 < "hello")
	{
		cout << "string is less than inputted string (< operator)" << endl;
	}
	else
	{
		cout << "string is more than inputted string (< operator)" << endl;
	}

	if (String1 > "hello")
	{
		cout << "string is more than inputted string (>)" << endl;
	}
	else
	{
		cout << "string is less than inputted string (> operator)" << endl;
	}

	cout << String1[2] << " is the third character ([] operator)" << endl;

	char temparray[] = "\0";
	String1 = temparray;
	cout << String1.CStr() << endl;
	
}