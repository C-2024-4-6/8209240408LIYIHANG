#include <iostream>
#include <iomanip> // �����������С��λ��
using namespace std;

int main() {
    double fahrenheit, celsius;

    // ���뻪���¶�
    cout << "�����뻪���¶ȣ�";
    cin >> fahrenheit;

    // ת��Ϊ�����¶�
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // ���������ʽΪ������λС��
    cout << fixed << setprecision(2);

    // ��������¶�
    cout << "��Ӧ�������¶�Ϊ��" << celsius << "��C" << endl;

    return 0;
}