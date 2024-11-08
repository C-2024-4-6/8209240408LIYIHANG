#include <iostream>
#include <iomanip> // 用于设置输出小数位数
using namespace std;

int main() {
    double fahrenheit, celsius;

    // 输入华氏温度
    cout << "请输入华氏温度：";
    cin >> fahrenheit;

    // 转换为摄氏温度
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // 设置输出格式为保留两位小数
    cout << fixed << setprecision(2);

    // 输出摄氏温度
    cout << "对应的摄氏温度为：" << celsius << "°C" << endl;

    return 0;
}