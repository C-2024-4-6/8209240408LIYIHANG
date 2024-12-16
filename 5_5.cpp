#include <iostream>
using namespace std;

// 定义Point类
class Point
{
private:
    int x, y; // 坐标点的x和y值

public:
    // 构造函数，初始化坐标值为(60, 80)
    Point() : x(60), y(80) {}

    // 公有成员函数：修改坐标值
    void setPoint(int i, int j)
    {
        x = 60 + i; // x = 60 + i
        y = 80 + j; // y = 80 + j
    }

    // 公有成员函数：输出当前坐标值
    void display() const
    {
        cout << "当前坐标值为: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    // 创建Point对象
    Point p;

    // 输出初始坐标值
    cout << "初始坐标值：" << endl;
    p.display();

    // 修改坐标值
    p.setPoint(10, 20); // 设置新坐标为 (60+10, 80+20)

    // 输出修改后的坐标值
    cout << "修改后的坐标值：" << endl;
    p.display();

    return 0;
}
