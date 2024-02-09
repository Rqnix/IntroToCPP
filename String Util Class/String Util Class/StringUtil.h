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

	void Append(const char* c);

	void Prepend(const char* c);

	const char* CStr() const;

	void ToLower();
	void ToUpper();
};

