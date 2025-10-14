#include <iostream>

using namespace std;

int main() {
    float arr[5];
    float *ptr;

    cout << "使用数组显示地址: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout << "\n使用指针显示地址: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}