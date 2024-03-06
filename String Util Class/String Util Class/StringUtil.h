 #pragma once
class StringUtil
{
private:
	//Member data
	char* arrayInput;
public: //Constructor/Destructors
	StringUtil();
	StringUtil(const char* c);
	StringUtil(StringUtil& su);
	~StringUtil();

	//Functions 

	int Length(); //How long the string is

	char CharacterAt(int index); //What a character in a certain index within the string is

	bool EqualTo(const char* c);

	char* Append(const char* c);

	char* Prepend(const char* c);

	const char* CStr() const;

	char* ToLower();
	char* ToUpper();

	int Find(const char* c);
	int Find(int startIndex, const char* c);

	char* Replace(const char* _find, const char* _replace); 

	char* ReadFromConsole();
	char* WriteToConsole();

	//Operators

	bool operator==(const char* c);
	bool operator!=(const char* c);
	bool operator<(const char* c);
	bool operator>(const char* c);

	char operator[](int Index);

	void operator=(const char* c);


};

