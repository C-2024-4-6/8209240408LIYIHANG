#include <iostream>
using namespace std;
class Time // 定义Time类
{
    public:
    void input()
    {
        cin >> hour >> minute >> sec;
    }
    void output()
    {
        cout << hour << ':' << minute << ':' << sec;
    }
    private:
        int hour;
        int minute;
        int sec;
};
int main()
{
    Time t1;        // 定义t1为Time类对象
    t1.input();
    t1.output();
    return 0;
}