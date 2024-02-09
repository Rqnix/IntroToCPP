#include <iostream>
#include "StringUtil.h"
#include <ctype.h>
using namespace std;

int main()
{
	char array[] = "Coolbeanz";
	StringUtil String1;
	//StringUtil String2;
	String1.Append(&array[0]);
	cout << String1.CStr() << endl; 
}