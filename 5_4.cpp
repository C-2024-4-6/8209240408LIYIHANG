#include <iostream>
using namespace std;

// 定义学生类
class Student
{
public:
    int id;       // 学号
    double score; // 成绩

    // 构造函数：初始化学号和成绩
    Student(int id, double score) : id(id), score(score) {}

    // 显示学生信息
    void display() const
    {
        cout << "学号: " << id << ", 成绩: " << score << endl;
    }
};

// 函数：找出最高成绩的学生并输出学号
void max(Student *students, int n)
{
    int maxIndex = 0; // 假设第一个学生是最高成绩
    for (int i = 1; i < n; i++)
    {
        if (students[i].score > students[maxIndex].score)
        {
            maxIndex = i;
        }
    }
    // 输出最高成绩的学生的学号
    cout << "最高成绩的学生学号是: " << students[maxIndex].id << endl;
}

int main()
{
    // 创建学生对象数组
    Student students[5] = {
        Student(1001, 85.5),
        Student(1002, 92.0),
        Student(1003, 78.0),
        Student(1004, 88.5),
        Student(1005, 91.0)};

    // 输出学生信息
    cout << "所有学生信息：" << endl;
    for (int i = 0; i < 5; i++)
    {
        students[i].display();
    }

    // 调用max函数找出最高成绩的学生
    max(students, 5);

    return 0;
}
