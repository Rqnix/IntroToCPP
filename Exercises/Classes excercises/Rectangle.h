#pragma once
class Rectangle
{
public:
	void RectCalc();
	float SetLength(float l);
	float GetLength();
	float SetWidth(float w);
	float GetWidth();
	float GetArea();
	float GetPerim();

private:
	float m_length;
	float m_width;
};

