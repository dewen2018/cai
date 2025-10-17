#include <iostream>

using namespace std;

/**
 * 从标准输入读取包含逗号分隔的数据，并提取逗号后的字符串部分输出到控制台
 * 
 * 程序通过循环处理输入流中的数据，每次忽略最多10个字符或直到遇到逗号，
 * 然后读取下一个字符串并输出，直到输入流结束。
 */
int main() {
    char str[30];
    // 循环处理输入流直到结束
    while (!cin.eof()) {
        // 忽略最多10个字符或直到遇到逗号
        cin.ignore(10, ',');
        // 检查是否到达输入流末尾
        if (!cin.eof()) {
            // 读取逗号后的字符串
            cin >> str;
            // 输出读取到的字符串
            cout << str << endl;
        }
    }
    return 0;
}