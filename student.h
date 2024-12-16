// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <string>  // 必须包含此头文件才能使用 std::string

class Student {
public:
    // 构造函数声明
    void set_value(int n, const std::string& nm, char s);
    void display() const;

private:
    int num;             // 学号
    std::string name;    // 姓名
    char sex;            // 性别
};

#endif  // STUDENT_H
