#include<iostream>
using namespace std;
int main()
{
	bool arr[101] = { false };
	for (int i = 1; i <= 100; i++)
	{
		for (int j = i; j <= 100; j++)
		{
			if (j%i==0)
			{
				arr[j] = !arr[j];
			}

		}
	}
	for (int i = 1; i <= 100; i++)
	{
		if (arr[i])
			cout << i << ' ';
	}
	return 0;
}