#include<iostream>
using namespace std;
int main()
{
	double arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<' ';
	}
	return 0;
}