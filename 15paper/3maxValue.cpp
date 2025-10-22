#include <iostream>

using namespace std;

int main() {
    int a[8];
    cout << "从文件中读取8个整数，空格分开：" << endl;
    freopen("/data/codes/code9/cai/15paper/input.txt", "r", stdin);
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
        cout << "a[" << i << "]=" << a[i] << endl;
    }

    int max = a[0];
    int index = 0;
    for (int i = 1; i < 8; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    cout << "最大值为：" << max << "，位置为：" << index + 1 << endl;
    return 0;
}
