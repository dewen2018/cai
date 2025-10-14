#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

// 结构体指针
int main() {
    Distance *ptr, d;
    ptr = &d;

    cout << "输入英尺：";
    // cin >> (*ptr).feet;
    cin >> d.feet;
    cout << "输入英寸：";
    // cin >> (*ptr).inch;
    cin >> d.inch;

    cout << "显示信息" << endl;
    cout << "距离 = " << (*ptr).feet << " 英尺 " << (*ptr).inch << " 英寸" << endl;
    // 变量d的地址存储在指针变量中，即ptr指向变量d，然后使用指针访问变量d的成员函数。
    //
    // 注意：由于指针ptr在此程序中指向变量d，因此（* ptr）.inch和d.inch是完全相同的单元。
    // 同样，（* ptr）.feet和d.feet是完全相同的单元。
    // 使用指针访问成员函数的语法很丑陋，但是还有一种更常见的代替符号->。
    cout << "距离 = " << ptr->feet << " 英尺 " << ptr->inch << " 英寸";


    return 0;
}
