#include <iostream>
using namespace std;

void rectArea() 
{
	float rectHeight = 0.f;
	float rectWidth = 0.f;

	cout << "H: ";
	cin >> rectHeight;
	cout << "W: ";
	cin >> rectWidth;
	float rectArea = rectHeight * rectWidth;
	cout << "Area equals " << rectArea << endl;
}
void C2F()
{
	float degCel = 78.0f; //Degrees celcius


	cout << "Degrees Celcius today: " << endl;
	cin >> degCel;

	float degFah = degCel * 9 / 5 + 32; //Degrees fahrenheit

	cout << "Degrees fahrenheit today: " << degFah << endl;
}
float average()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float d = 0.0;
	float e = 0.0;

	cout << "Pick 5 numbers: ";
	cin >> a >> b >> c >> d >> e;
	float avg = (a + b + c + d + e) / 5;
	cout << "The average of " << a << " " << b << " " << c << " " << d << " and " << e << " is " << avg << endl;
	return avg;
}

extern float inputMean();

int main()
{
	extern int factorial();
	extern int goldRatio();

	factorial();
	

	return 0;
}
	



	//Other exercises:

	//NumberA = 14
	/*int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	cout << "A) " << numberA << endl;*/



	//B) = 9

	/*int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	cout << "B) " << numberB << endl;*/



	////C) 21
	//int numberC = 3;
	//numberC = 7;
	//numberC = 1;

	//int somethingC = 23;
	//somethingC = 21;
	//
	//numberC = somethingC;
	//
	//cout << "C) " << numberC << endl; 

	////D 3
	//int numberD = 1;
	//int somethingD = 3;
	//numberD = somethingD;
	//cout << "D) " << somethingD << endl; 

	////E 6
	//int x = 13;
	//x = x / 2;
	//cout << "E) " << x << endl;

	////F) 6.5
	//float y = 13;
	//y = y / 2;
	//cout << "F) " << y << endl; 


	//Number swap
	/*int x = 1;
	int y = 0;
	int z = 3;

	cout << "Pick two numbers to swap: ";
	cin >> x >> z;
	//y = x;
	//x = z;
	//cout << "Your swapped numbers are " << x << " and " << y << endl;*/


	//Number swap challenge
	//int x = 4;
	//int y = 1; 
	//
	//y = x + y;
	//x = y - x;
	//y = y - x;
	//cout << x << " " << y << endl;

	/*translating naming conventions
	int age
	int bullet_count
	float dog_years
	int qty
	float shield_value
	float defense_matrix_cooldown
	int red_armor_value
	float red_armor_ratio
	int happiness
	int ghandi_aggression*/


	//Brayden 31/01/24 
