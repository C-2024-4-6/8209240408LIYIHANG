// student.cpp

#include <iostream>
#include "student.h"    // ����ѧ�����ͷ�ļ�
#include <string>        // ���������ͷ�ļ�������ʹ�� std::string

using namespace std;

void Student::set_value(int n, const std::string& nm, char s) {
    num = n;
    name = nm;  // ʹ�� std::string ֱ�Ӹ�ֵ
    sex = s;
}

void Student::display() const {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
