#include <iostream>
#include <iomanip>

using namespace std;

// 主函数：演示C++中I/O流的格式化操作
// 包括使用iomanip库设置输出宽度、精度和填充字符，
// 以及手动计算字符串中数字字符的数量
int main() {
    double x = 123.456;
    // 设置输出宽度为10，精度为5位有效数字，输出浮点数x
    cout << "x = " << setw(10) << setprecision(5) << x << endl;

    char str[20] = "123_Hi";
    // 使用'*'作为填充字符，设置输出宽度为8，输出字符串str
    cout << "str = " << setfill('*') << setw(8) << str << endl;


    int i = 0, cnt = 0;
    // 遍历字符串，统计其中数字字符('0'-'9')的个数
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') cnt++;
        i++;
    }

    // 设置输出格式显示正号
    cout.setf(ios::showpos);
    cout << "cnt=" << cnt;
    return 0;
}