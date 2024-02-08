#pragma once
class Circle
{
	float m_radius;

public: 
	void CircleCalc();
	void SetRadius(float f);
	const float GetRadius();
	float GetArea();
	float GetCircumference(); 
};

