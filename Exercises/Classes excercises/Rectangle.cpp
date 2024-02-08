#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::RectCalc() 
{
	float l = 0.f;
	float w = 0.f;

	cout << "What is the length and width of your rectangle? " << endl;
	cin >> l >> w;
	Rectangle Rectangle1 = {};

	Rectangle1.SetLength(l);
	Rectangle1.SetWidth(w);

	cout << Rectangle1.GetLength() << endl;
	cout << Rectangle1.GetWidth() << endl;

	cout << "Area = " << Rectangle1.GetArea() << endl;
	cout << "Perimeter = " << Rectangle1.GetPerim() << endl;

}


float Rectangle::SetLength(float l)
{
	if (l < 0)
	{
		m_length = 0.f;
	}
	else
	{
		m_length = l;
	}
	return 0;
}

float Rectangle::GetLength()
{
	return m_length;
}

float Rectangle::SetWidth(float w)
{
	if (w < 0)
	{
		m_width = 0.f;
	}
	else
	{
		m_width = w;
	}
	return 0;
}

float Rectangle::GetWidth()
{
	return m_width;
}

float Rectangle::GetArea()
{
	return m_width * m_length;;
}

float Rectangle::GetPerim()
{
	return (2 * m_width) + (2 * m_length);
}
