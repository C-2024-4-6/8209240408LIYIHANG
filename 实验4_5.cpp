#include<iostream>
using namespace std;
#include<string>
int main()
{
	string str1, str2;
	cout << "Enter the first string:";
	cin >> str2 ;
	cin.ignore();
	cout << "Enter the second string:";
	getline(cin, str1);
	int pos = str1.find(str2);
	cout << "indexOf(¡°" << str2 << "¡±, ¡°" << str1 << "¡±) is " << pos;
	


	return 0;
}