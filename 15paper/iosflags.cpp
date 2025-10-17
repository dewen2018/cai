#include <iostream>
#include <iomanip>

using namespace std;

/**
 * 演示C++中IO流的格式控制功能
 * 
 * 该程序通过设置不同的输出宽度、填充字符和对齐方式，
 * 展示如何控制控制台输出的格式。
 * 
 * 程序无参数输入，输出格式化的数字到控制台。
 * 返回值：总是返回0，表示程序正常结束。
 */
int main() {
    // 设置输出宽度为4，填充字符为'#'，右对齐输出数字123
    cout.width(4);
    cout.fill('#');
    cout << setiosflags(ios::right) << 123 << endl;

    // 更改填充字符为'+'，左对齐输出数字456
    cout.fill('+');
    cout << setiosflags(ios::left) << 456 << endl;

    return 0;
}