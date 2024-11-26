#include<iostream>
#include<algorithm>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; i++)
	{
		list3[i] = list2[i-size1];
	}
	sort(list3, list3 + size1 + size2);
	cout << endl << "The merged list is:";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << ' ';
	}
}
int main()
{
	int list1[80], list2[80], list3[160],size1,size2;
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << endl;
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);

	return 0;
}