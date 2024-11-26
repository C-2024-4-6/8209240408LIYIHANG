#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
	double arr[3];
	arr[0] = side1;
	arr[1] = side2;
	arr[2] = side3;
	sort(arr, arr + 3);
	if (arr[0] + arr[1] > arr[2])
	{
		return true;
	}
	else return false;
}