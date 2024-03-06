#include "StringUtil.h"
#include <iostream>
#include <ctype.h>

StringUtil::StringUtil()
{
    char array[5] = {'1', 'P', 'b', '.', '\0'};
    arrayInput = array;

    arrayInput = new char{'\0'};
}

StringUtil::StringUtil(const char* c)
{
    //Dynamically allocating space for this object 
    arrayInput = new char[strlen(c) + 1]; //Size of string length, plus space for the null terminator

    strcpy_s(arrayInput, strlen(c) + 1, c); //Copying c char[] into member variable arrayInput
}


StringUtil::StringUtil(const StringUtil& su) //& = address symbol - The constructor to copy strings
{
    arrayInput = new char[strlen(su.CStr()) + 1]; //Allocates space equal to the length of the string "su" plus 1 (for the null terminator)

    strcpy_s(arrayInput, strlen(su.CStr()) + 1, su.CStr()); //Copies the string of "su" onto arrayInput, with the length of "su" plus 1 for null terminator
}

StringUtil::StringUtil(StringUtil&& su)
{
    arrayInput = su.arrayInput;
    su.arrayInput = nullptr;
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

char* StringUtil::Append(const char* c) //Appends the string stored in c onto arrayInput
{                                
    char* app_str; 
    app_str = new char[strlen(c) + Length() + 1];
    strcpy_s(app_str, strlen(c) + Length() + 1, arrayInput);
    strcat_s(app_str, strlen(c) + Length() + 1, c);
    delete[] arrayInput;
    arrayInput = app_str;
    app_str = nullptr; 
    
    return arrayInput;
}


char* StringUtil::Prepend(const char* c) //Prepends the string stored in c onto arrayInput
{
    char* pre_str;
    pre_str = new char[strlen(c) + Length() + 1];
    strcpy_s(pre_str, strlen(c) + Length() + 1, c);
    strcat_s(pre_str, strlen(c) + Length() + 1, arrayInput);
    delete[] arrayInput;
    arrayInput = pre_str;
    pre_str = nullptr; 

    return arrayInput;
    
}


const char* StringUtil::CStr() const //Returns the string stored in arrayInput
{
    return arrayInput;
}

char* StringUtil::ToLower() //Turns the string in arrayInput into all lowercase
{
    //for (int i = 0; i <= Length(); i++)
    for (int i = 0; i < Length(); i++)
    {
        arrayInput[i] = (tolower(arrayInput[i]));
    }
    return arrayInput;
}

char* StringUtil::ToUpper() //Turns the string in arrayInput into all uppercase
{
    for (int i = 0; i < Length(); i++)
    {
        arrayInput[i] = (toupper(arrayInput[i]));
    }
    return arrayInput;
}

int StringUtil::Find(const char* c) //attempts to find a string within arrayInput starting from index 0
{
    return Find(0, c);
}

int StringUtil::Find(int startIndex, const char* c) //Attempts to find a string within arrayInput starting from index: startIndex
{
    for (int i = startIndex; i < Length(); i++)
    {
        for (int j = 0; j <= strlen(c); j++)
        {
            if (j == strlen(c))
            {
                return i;
            }
            else
            {
                if (i + j < Length() && arrayInput[i + j] == c[j])
                {

                    continue;
                }
                else
                {
                    break;
                }
            }

        }
    }
    return -1;
}


char* StringUtil::Replace(const char* _find, const char* _replace) //Uses the find function to search for a string and replace it
{
    //Initializes varaibles used to measure where in the string the function is
    int runningIndex = 0;
    int foundIndex = Find(runningIndex, _find);
    
    while (foundIndex != -1) //As long as Find() finds the inputted string
    {

        int t1Len = foundIndex; //t1Len is the length of the temp1 string, which is used to store the string before the found string
        char* temp1;
        temp1 = new char[t1Len + 1];
        temp1[t1Len] = '\0';


        int t2Len = Length() - (t1Len + strlen(_find)); //temp2 is used to store what is after the replaced string
        char* temp2;
        temp2 = new char[t2Len + 1];
        temp2[t2Len] = '\0';


        for (int i = 0; i < t1Len; i++) //applying arrayInput onto temp1 until it hits the found string
        {
            temp1[i] = arrayInput[i];
        }
        int j = 0;

        for (int i = (t1Len + strlen(_find)); i < Length(); i++) //applying arrayInput onto temp2 from after the replace, til the end of string
        {
            temp2[j] = arrayInput[i];
            j++;
        }

        int resultLen = strlen(temp1) + strlen(temp2) + strlen(_replace); //result is used to store the end result, in order of temp1, _replace then temp2
        char* result;
        result = new char[resultLen + 1];
        result[resultLen] = '\0';

        strcpy_s(result, resultLen + 1, temp1); //sewing the string back together
        strcat_s(result, resultLen + 1, _replace);
        strcat_s(result, resultLen + 1, temp2);

        delete[] arrayInput; //Memory deallocation and pointer management
        arrayInput = result;
        result = nullptr;
        delete[] temp1;
        delete[] temp2;

        runningIndex = foundIndex + strlen(_replace); //keeping track of the point in the loop
        foundIndex = Find(runningIndex, _find);
    }

    return arrayInput;
}

char* StringUtil::ReadFromConsole() //Takes an input from the console
{
    char* conInput;
    conInput = new char[1000];

    std::cout << "Input required: " << std::endl;
    std::cin.getline(conInput,1000);

    delete[] arrayInput;
    arrayInput = conInput;

    return arrayInput;
}

char* StringUtil::WriteToConsole() //Writes the current string to the console
{
    std::cout << arrayInput << std::endl;  
    return arrayInput;
}

bool StringUtil::operator==(const char* c) //Tests to see if two strings are equal
{
    return EqualTo(c);
}

bool StringUtil::operator!=(const char* c) //Tests to see if two strings are Not equal
{
    bool outcome = EqualTo(c);
    if(outcome != true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool StringUtil::operator<(const char* c) //Tests to see if the left string is less than the right string
{
    return strcmp(arrayInput, c) < 0;
    
}

bool StringUtil::operator<(StringUtil& other)
{
    return strcmp(arrayInput, other.arrayInput) < 0;
}

bool StringUtil::operator>(const char* c) //Tests to see if the left string is greater than the right string
{
    return strcmp(arrayInput, c) > 0;
}


char StringUtil::operator[](int Index) //Tells you the character at the inputted index
{
    return CharacterAt(Index);
}

StringUtil& StringUtil::operator=(const char* c) //Copies the inputted string onto the main string
{
    delete[] arrayInput;

    arrayInput = new char[strlen(c) + 1];

    strcpy_s(arrayInput, strlen(c) + 1, c);

    return *this;
}

StringUtil StringUtil::operator=(StringUtil& other)
{
    delete[] arrayInput;
    arrayInput = new char[other.Length() + 1];
    strcpy_s(arrayInput, other.Length() + 1, other.arrayInput);

    return *this;
}

StringUtil StringUtil::operator=(StringUtil&& other)
{
    delete[] arrayInput;
    arrayInput = other.arrayInput;
    other.arrayInput = nullptr;
    return *this;
}







