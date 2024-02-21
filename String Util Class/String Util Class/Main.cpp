#include <iostream>
#include "StringUtil.h"
#include <ctype.h>
using namespace std;

int main()
{
	char array[] = "hawaiian hamburger";
	StringUtil String1 = array;

	cout << "Length function " << String1.Length() << endl;
	cout << "CharacterAt function at the second index " << String1.CharacterAt(1) << endl;
	cout << "EqualTo function comparing if char array is equal to cheeseburger " << String1.EqualTo("cheeseburger");
	cout << "Append function " << String1.Append("s") << endl;
	cout << "Prepend function " << String1.Prepend("not a ") << endl;
	cout << "C String function " << String1.CStr() << endl;
	cout << "ToUpper function " << String1.ToUpper() << endl;
	cout << "ToLower function " << String1.ToLower() << endl;
	cout << "Find function " << String1.Find("ham") << endl;
	cout << "Find (from index) function " << String1.Find(3, "ham") << endl;
	cout << "Replace function " << String1.Replace("ham", "badham") << endl;
	cout << "ReadFromConsole function " << String1.ReadFromConsole() << endl;
	cout << "WriteToConsole function " << String1.WriteToConsole() << endl;
}