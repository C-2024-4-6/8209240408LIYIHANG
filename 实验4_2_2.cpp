#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int ans=0;
	for (int i = 0; hexString[i]!='\0'; i++)
	{
		int temp = 0;
		if (hexString[i] >= '0' && hexString[i] <= '9')temp = hexString[i] - '0';
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')temp = hexString[i] - 'a'+10;
		else  temp = hexString[i] - 'A' + 10; 
		ans = ans * 16 + temp;
	}
	return ans;
}
int main()
{
	const char* ch = "A5";
	cout << "十进制数为：" << parseHex(ch);

	return 0;
}