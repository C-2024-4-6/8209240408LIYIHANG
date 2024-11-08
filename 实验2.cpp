#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<cmath>
void test1()
{
	char myput;
	cin >> myput;
	if (myput >= 'a' && myput <= 'z')
	{
		cout << (char)(myput - 'a' + 'A') << endl;
	}
	else
	{
		cout << myput + 1 << endl;
	}
}
void test2()
{
	double x;
	cin >> x;
	if (x > 0 && x < 1)
	{
		cout << 3 - 2 * x << endl;
	}
	else if (x >= 1 && x < 5)
	{
		cout << 2.0 / (4 * x) + 1 << endl;
	}
	else if (x >= 5 && x < 10)
	{
		cout << x * x << endl;
	}
	else
	{
		cout << "����ֵ���ڸú����Ķ�������" << endl;
	}
}
void test3()
{
	double a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 3);
	if (a[0] + a[1] <= a[2])
	{
		cout << "���ܹ���������" << endl;
	}
	else
	{
		cout << a[0] + a[1] + a[2] << endl;
		if (a[0] == a[1])
		{
			cout << "��������Ϊ����������" << endl;
		}
		else
		{
			cout << "�������β�Ϊ����������" << endl;
		}
	}
}
void test4()
{
	char fu;
	cin >> fu;
	int a, b;
	cin >> a >> b;
	if (fu == '+')
	{
		cout << a + b << endl;
	}
	else if (fu == '-')
	{
		cout << a - b << endl;
	}
	else if (fu == '*')
	{
		cout << a * b << endl;
	}
	else if (fu == '/')
	{
		if (b == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << a / b << endl;
		}
	}
	else if (fu == '%')
	{
		cout << a % b << endl;
	}
	else
	{
		cout << "������Ƿ�" << endl;
	}
}
void test5()
{
	string str;
	getline(cin, str);
	int yinwenCount = 0;
	int konggeCount = 0;
	int shuziCount = 0;
	int qitaCount = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			yinwenCount++;
		}
		else if (str[i] == ' ')
		{
			konggeCount++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			shuziCount++;
		}
		else
		{
			qitaCount++;
		}
	}
	cout << "Ӣ����ĸ" << yinwenCount << "�ո�" << konggeCount << "�����ַ�" << shuziCount << "�����ַ�" << qitaCount << endl;
}
void test6()
{
	int a, b;
	cin >> a >> b;
	cout << "�������:";
	for (int gcd = max(a, b);; gcd--)
	{
		if (a % gcd == 0 && b % gcd == 0)
		{
			cout << gcd << endl;
			break;
		}
	}
	cout << endl;
	cout << "��С������:";
	for (int lcm = max(a, b);; lcm++)
	{
		if (lcm % a == 0 && lcm % b == 0)
		{
			cout << lcm << endl;
			break;
		}
	}

}
void test7()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void test8()
{
	int a;
	cout << "������һ���Ǹ�����: ";
	cin >> a;

	if (a < 0) {
		cout << "����û��ƽ����" << endl;
	}
	else {
		double temp = a;
		for (;;) {
			double xn = temp;
			temp = (temp + a / temp) / 2;
			if (fabs(temp - xn) < 1e-5) {
				cout << "a��ƽ����Ϊ: " << temp << endl;
				break;
			}
		}
	}
}
void test9()
{
	cout << (2 + 4 + 8 + 16 + 32) / 5.0 * 0.8 << endl;
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	return 0;
}