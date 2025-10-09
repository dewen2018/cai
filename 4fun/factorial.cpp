#include <iostream>

using namespace std;

// 定义函数
int factorial(int n);

int main() {
    int n;
    cout << "Enter a number来查找阶乘: ";
    cin >> n;
    cout << n << "的阶乘是: " << factorial(n);
    return 0;
}

/*
 递归函数
 递归函数是一种调用自身函数的函数。
 递归函数的调用必须包含一个退出条件，否则会进入无限循环。
 */
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}