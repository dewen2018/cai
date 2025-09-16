#include <iostream>

using namespace std;

int absolute(int x) {
    return x < 0 ? -x : x;
}

float absolute(float x) {
    return x < 0 ? -x : x;
}

double absolute(double x) {
    return x < 0 ? -x : x;
}

// 函数重载
int main() {
    cout << "abs(-1) = " << abs(-1) << endl;
    cout << "abs(-1.1) = " << abs(-1.1) << endl;
    cout << "abs(-1.1f) = " << abs(-1.1f) << endl;
    // 在C++中，abs函数已经在标准库中定义，当我们使用using namespace std;时，自定义的abs函数与标准库中的abs函数会产生冲突，导致语法错误。
    // 所以这里使用了自定义的absolute函数
    cout << "abs(-1) = " << absolute(-1) << endl;
    cout << "abs(-1.1) = " << absolute(-1.1) << endl;
    cout << "abs(-1.1f) = " << absolute(-1.1f) << endl;
}