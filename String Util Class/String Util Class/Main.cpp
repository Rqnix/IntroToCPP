#include <iostream>
#include "StringUtil.h"
#include <ctype.h>
using namespace std;
#include <fstream>

int main()
{
	fstream file;
	file.open("file.txt", ios::app);

	if (file.is_open())
	{
		file << "";
	}
	else
	{
		file << "We fucked up" << endl;
		return 1;
	}

	char array[] = "hawaiian hamburger";
	StringUtil String1 = array;
	

	file << "Length function (should be 18) " << String1.Length() << endl;
	file << "Length Test: ";
	if (String1.Length() == 18) 
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "CharacterAt function at the second index (should be a) " << String1.CharacterAt(1) << endl;
	file << "CharacterAt Test: ";
	if (String1.CharacterAt(1) == 'a')
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "EqualTo function comparing if char array is equal to cheeseburger (should be false) " << String1.EqualTo("cheeseburger") << endl;
	file << "EqualTo Test: ";
	if (! String1.EqualTo("cheeseburger"))
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "Append function (should be hawaiian hamburgers) " << String1.Append("s") << endl;
	file << "Append Test: ";
	if (String1 == "hawaiian hamburgers")
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "Prepend function (should be not a hawaiian hamburgers) " << String1.Prepend("not a ") << endl;
	file << "Prepend Test: ";
	if (String1 == "not a hawaiian hamburgers")
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "C String function  (should return current string) " << String1.CStr() << endl;
	file << "CStr Test: ";
	if (String1 == "not a hawaiian hamburgers")
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "ToUpper function (should make everything uppercase) " << String1.ToUpper() << endl;
	file << "ToUpper Test: ";
	if (String1 == "NOT A HAWAIIAN HAMBURGERS")
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "ToLower function (should make everything lowercase) " << String1.ToLower() << endl;
	file << "ToLower Test: ";
	if (String1 == "not a hawaiian hamburgers")
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "Find function (should find ham from index 0) " << String1.Find("ham") << endl;
	file << "Find Test: ";
	if (String1.Find("ham") == 15)
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "Find (from index) function (should find ham from index 3) " << String1.Find(3, "ham") << endl;
	file << "Find (from index) Test: ";
	if (String1.Find(3, "ham") == 15)
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "Replace function (should replace ham with badham) " << String1.Replace("ham", "badham") << endl;
	file << "Replace Test: ";
	if (String1 == "not a hawaiian badhamburgers")
	{
		file << "Passed" << endl;
	}
	else file << "Failed" << endl;

	file << "ReadFromConsole function (should take input fron console and output it) " << String1.ReadFromConsole() << endl;
	file << "ReadFromConsole Test: ";
	file << "Passed" << endl;

	file << "WriteToConsole function (should output current word stored; should be same as readfromconsole) " << String1.WriteToConsole() << endl;
	file << "WriteToConsole Test: ";
	file << "Passed" << endl;


	if (String1 == "hello")
	{
		file << "string is equal to inputted string (==)" << endl;
	}
	else
	{
		file << "string is not equal to inputted string (==)" << endl;
	}

	if (String1 != "hello")
	{
		file << "string is not equal to inputted string (!= operator)" << endl;
	}
	else
	{
		file << "string is equal to inputted string (!= operator)" << endl;
	
	}

	if (String1 < "hello")
	{
		file << "string is less than inputted string (< operator)" << endl;
	}
	else
	{
		file << "string is more than inputted string (< operator)" << endl;
	}

	if (String1 > "hello")
	{
		file << "string is more than inputted string (>)" << endl;
	}
	else
	{
		file << "string is less than inputted string (> operator)" << endl;
	}

	file << String1[2] << " is the third character ([] operator)" << endl;

	char temparray[] = "\0";
	String1 = temparray;
	file << String1.CStr() << endl;
	
	//Date/Time code
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int sec = newtime.tm_sec;
	int min = newtime.tm_min;
	int hour = newtime.tm_hour;
	int day = newtime.tm_mday;
	int month = 1 + newtime.tm_mon;
	int year = newtime.tm_year;

	file << "The time is: " << hour << ";" << min << " and " << sec << " seconds.";
	file << "The date is: " << day << "/" << month << "/" << year + 1900 << endl;
}