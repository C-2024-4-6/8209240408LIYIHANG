#include <iostream>
using namespace std;

// 定义长方柱类
class RectangularPrism
{
private:
    double length; // 长
    double width;  // 宽
    double height; // 高

public:
    // 成员函数：输入长方柱的长、宽和高
    void inputDimensions()
    {
        cout << "请输入长方柱的长、宽、高（分别以空格分开）：";
        cin >> length >> width >> height;
    }

    // 成员函数：计算长方柱的体积
    double calculateVolume() const
    {
        return length * width * height;
    }

    // 成员函数：输出体积
    void displayVolume() const
    {
        cout << "长方柱的体积为: " << calculateVolume() << endl;
    }
};

int main()
{
    // 创建3个长方柱对象
    RectangularPrism prism1, prism2, prism3;

    // 输入三个长方柱的长、宽、高
    cout << "请输入第一个长方柱的数据:" << endl;
    prism1.inputDimensions();

    cout << "请输入第二个长方柱的数据:" << endl;
    prism2.inputDimensions();

    cout << "请输入第三个长方柱的数据:" << endl;
    prism3.inputDimensions();

    // 输出三个长方柱的体积
    cout << "\n第一个长方柱的体积为: ";
    prism1.displayVolume();

    cout << "第二个长方柱的体积为: ";
    prism2.displayVolume();

    cout << "第三个长方柱的体积为: ";
    prism3.displayVolume();

    return 0;
}
