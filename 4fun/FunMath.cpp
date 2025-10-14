#include <iostream>
#include <cmath>

using namespace std;

// 函数原型(声明)
int customsAdd(int a, int b);

int main() {
    double num, square;
    cout << "Enter a number: ";
    cin >> num;

    // sqrt()是一个用于计算平方根的库函数
    square = sqrt(num);
    cout << "Square root of " << num << " is " << square << endl;

    cout << "Customs add: " << customsAdd(num, 1) << endl;
    return 0;
}

// 函数定义
int customsAdd(int a, int b) {
    return a + b - 1;
}