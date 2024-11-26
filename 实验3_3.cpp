#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << area(a, b, c);
	}
	else cout << "输入不能构成三角形";
	return 0;
}