#include <iostream>

using namespace std;

int main() {
    float arr[5];

    cout << "使用指针符号显示地址: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Address of arr[" << i << "] = " << &arr[i] << endl;
        cout << arr + i << endl;
    }

    cout << "----------------------" << endl;
    cout << arr << endl;
    cout << arr + 1 << endl;

    return 0;
}