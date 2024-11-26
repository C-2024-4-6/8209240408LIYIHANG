#include<iostream>
using namespace std;
int my_gcd(int m, int n)
{
	int a = min(m, n);
	while (1)
	{
		if (m % a == 0 && n % a == 0)
		{
			return a;
		}
		a--;
	}
}
int my_lcm(int m, int n)
{
	int a = max(m, n);
	while (1)
	{
		if (a % m == 0 && a % n == 0)
		{
			return a;
		}
		a++;
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << my_gcd(m, n);
	cout << endl;
	cout << my_lcm(m, n);
	return 0;
}