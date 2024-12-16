// main.cpp

#include <iostream>
#include "student.h"   // 包含学生类的头文件
#include <string>       // 必须包含此头文件，才能使用 std::string

using namespace std;

int main() {
    Student stud;                 // 创建 Student 对象
    stud.set_value(007, "tcg", 'm'); // 设置学生信息

    stud.display();                // 显示学生信息

    return 0;
}
