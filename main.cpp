// main.cpp

#include <iostream>
#include "student.h"   // ����ѧ�����ͷ�ļ�
#include <string>       // ���������ͷ�ļ�������ʹ�� std::string

using namespace std;

int main() {
    Student stud;                 // ���� Student ����
    stud.set_value(007, "tcg", 'm'); // ����ѧ����Ϣ

    stud.display();                // ��ʾѧ����Ϣ

    return 0;
}
