#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void count(const string str, int counts[])
{
	for (int i = 0; i < str.size(); i++)
	{
		char a = tolower(str[i]);
		if (a >= 'a' && a <= 'z')
		{
			counts[a - 'a']++;
		}
	}

}
int main()
{
	int counts[26] = {0};
	string str;
	cout << "Enter a string:";
	getline(cin, str);
	count(str, counts);
	char ch[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	for (int i = 0; i < 26; i++)
	{
		cout << ch[i] << ":" << counts[i] <<" ";
	}
	return 0;
}