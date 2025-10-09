#include <iostream>

using namespace std;

// 声明函数
void func();

static int count = 25;

// 定义函数
void func() {
    static int i = 8;
    i++;
    cout << "变量 i 为 " << i;
    cout << " 变量 count 为 " << count << endl;
}

//static 存储类
int main() {
    while (count--) {
        func();
    }
    return 0;
}