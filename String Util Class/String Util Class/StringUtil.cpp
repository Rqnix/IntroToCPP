#include "StringUtil.h"
#include <iostream>

StringUtil::StringUtil()
{
    /*char array[4] = {'1', 'P', 'b', '\0'};
    arrayInput = array;*/

    arrayInput = new char[4] {'1', 'P', 'b', '\0'};
}

StringUtil::StringUtil(const char* c)
{
    //Dynamically allocating space for this object 
    arrayInput = new char[strlen(c) + 1]; //Size of string length, plus space for the null terminator

    strcpy_s(arrayInput, strlen(c) + 1, c); //Copying c char[] into member variable arrayInput
}


StringUtil::StringUtil(StringUtil& su) //& = address symbol - The constructor to copy strings
{
    arrayInput = new char[strlen(su.CStr()) + 1]; //Allocates space equal to the length of the string "su" plus 1 (for the null terminator)

    strcpy_s(arrayInput, strlen(su.CStr()) + 1, su.CStr()); //Copies the string of "su" onto arrayInput, with the length of "su" plus 1 for null terminator
}

StringUtil::~StringUtil() //Deletes dynamically allocated memory
{
    delete[] arrayInput; 
}

int StringUtil::Length() //The function that gets the length of strings that are stored in arrayInput
{
    return strlen(arrayInput);
   
}

char StringUtil::CharacterAt(int index) //Takes a character within the string at a certain index
{
    if (index < 0 || index >= Length()) //Measures if the index input is within the range of the array, which is between 0 and length -1 (because you start counting at 0)
    {
        return '\0'; 

    }
    else //Otherwise, output the part of the array that is specified by index
    {
        return arrayInput[index];
    }
}

bool StringUtil::EqualTo(const char* c) //Measures two strings, confirming if they are the same
{
    for (int i = 0; i <= Length(); i++) //starting from 0, if I is less than length, i+1 and run the loop
    {
        if (arrayInput[i] != c[i]) //Measure if arrayInput at index i is the same as c index i
        {
            return false; 
        }
    }
    return true; //If false is not run, and the loop finishes (when i = Length) then return true and end the function
}

void StringUtil::Append(const char* c)
{
    
}

//void StringUtil::Prepend(const char* c)
//{
//}


const char* StringUtil::CStr() const //Returns the string stored in arrayInput
{
    return arrayInput;
}

