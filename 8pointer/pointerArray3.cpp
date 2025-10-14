#include <iostream>

using namespace std;

int main() {
    float arr[5];

    cout << "使用指针符号插入数据: " << endl;
    cout << "输入 5 个数字: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> *(arr + i);
    }

    cout << "使用指针符号显示数据: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(arr + i) << "  ";
    }

    return 0;
}