// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>  // ���������ͷ�ļ�����ʹ�� std::string

class Student {
public:
    // ���캯������
    void set_value(int n, const std::string& nm, char s);
    void display() const;

private:
    int num;             // ѧ��
    std::string name;    // ����
    char sex;            // �Ա�
};

#endif  // STUDENT_H
