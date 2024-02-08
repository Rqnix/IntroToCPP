#include "Circle.h"
#include <iostream>
using namespace std;

const float pi = 3.1415f;

void Circle::CircleCalc()
{


}


void Circle::SetRadius(float f)
{
	if (f < 0)
	{
		m_radius = 0.f;

	}
	else
	{
		m_radius = f;
	}
}

const float Circle::GetRadius()
{
	return m_radius;
}

float Circle::GetArea()
{
	return pi * m_radius * m_radius; //pi(r^2)
}

float Circle::GetCircumference()
{
	return pi * 2 * m_radius; //2(Pi) * r
}
