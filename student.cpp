// student.cpp

#include <iostream>
#include "student.h"    // 包含学生类的头文件
#include <string>        // 必须包含此头文件，才能使用 std::string

using namespace std;

void Student::set_value(int n, const std::string& nm, char s) {
    num = n;
    name = nm;  // 使用 std::string 直接赋值
    sex = s;
}

void Student::display() const {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
