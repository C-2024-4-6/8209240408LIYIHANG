#include"mytriangle.h"
double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double S = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return S;
}