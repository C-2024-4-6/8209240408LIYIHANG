#include <iostream>
using namespace std;
const double PI = 3.1415927;

int main() {
    double radius, height;
    cout << "������Բ׶�ĵ���뾶��";
    cin >> radius;
    cout << "������Բ׶�ĸ߶ȣ�";
    cin >> height;
    double volume = (1.0 / 3.0) * PI * radius * radius * height;
    cout << "Բ׶�����Ϊ��" << volume << endl;

    return 0;
}