#include <iostream>
using namespace std;
const double PI = 3.1415927;

int main() {
    double radius, height;
    cout << "请输入圆锥的底面半径：";
    cin >> radius;
    cout << "请输入圆锥的高度：";
    cin >> height;
    double volume = (1.0 / 3.0) * PI * radius * radius * height;
    cout << "圆锥的体积为：" << volume << endl;

    return 0;
}