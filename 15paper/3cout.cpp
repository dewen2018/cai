#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 定义整型变量并赋值
    int a = 234;

    // 设置输出为十进制格式
    cout.setf(ios::dec, ios::basefield);
    cout << a << endl;

    // 使用 '*' 填充宽度为8的字段，并输出变量a和"ok"
    cout << setfill('*') << setw(8) << a << "ok" << endl;


    // 定义双精度浮点变量并赋值
    double b = 1234.567;
    cout << b << endl;
    // 设置输出宽度为8，精度为3位小数后输出变量b
    cout << setw(8) << setprecision(3) << b << endl;

    // 定义字符变量并赋值
    char c = 'a';
    cout << "cout.put(c):" << endl;
    // 输出字符 'a' 后面第2个字符（即'c'）
    //    这里 c + 2 表示字符 'a' 的ASCII码值加上2，即 'c' 的ASCII码值。所以 cout.put(c + 2) 会输出字符 'c'。
    ///**
    // * 虽然 cout << c 和 cout.put(c) 都可以输出字符，但它们有以下区别：
    //cout.put() 更明确地表达输出单个字符的意图
    //cout.put() 可以接受整数参数并自动转换为对应的ASCII字符
    //cout.put() 支持链式调用，如：cout.put('A').put('B').put('C');
    //在现代C++中，cout.put() 使用频率不高，因为 cout << 操作符已经足够处理大多数输出需求，但了解这个函数有助于理解C++ I/O流的完整功能。
    // */
    cout.put(c + 2);
    return 0;
}