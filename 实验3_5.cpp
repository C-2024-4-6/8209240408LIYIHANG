#include<iostream>
using namespace std;
int peach_count(int day)
{
	if (day == 10)return 1;
	return 2*(peach_count(day + 1)+1);
}
int main()
{
	cout << peach_count(1);
	return 0;
}