#include <iostream>
#include "StringUtil.h"
#include <ctype.h>
using namespace std;

int main()
{
	char array[] = "";
	StringUtil String1;
	//StringUtil String2;
	String1.ReadFromConsole();
	cout << String1.CStr() << endl; 
}