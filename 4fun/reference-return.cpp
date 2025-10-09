#include <iostream>

using namespace std;
// 全局变量
int num;

// 函数声明
int &getNum();

int main() {
    getNum() = 10;
    cout << "num = " << num << endl;
    cout << "num = " << getNum() << endl;
    // 输出 num 的地址
    cout << "num = " << &getNum() << endl;
    getNum() = 20;
    cout << "num = " << num << endl;
    cout << "num = " << getNum() << endl;
    // 输出 num 的地址
    cout << "num = " << &getNum() << endl;

    return 0;
}

int &getNum() {
    return num;
}