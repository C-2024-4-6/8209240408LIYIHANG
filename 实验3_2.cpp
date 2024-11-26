#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int temp = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			temp++;
		}
	}
	if (temp == 2)
	{
		return true;
	}
	else return false;
}
int main()
{
	int count = 0;
	int num = 2;
	int arr[200];
	while (1)
	{
		if (is_prime(num))
		{
			arr[count] = num;
			count++;
		}
		num++;
		if (count == 200)
		{
			break;
		}
	}
	for (int i = 0; i < 200; i++)
	{
		cout << arr[i]<<' ';
		if ((i + 1) % 10 == 0)cout << endl;
	}
	return 0;
}