#include <iostream>

using namespace std;

int main() {
    int arr[5], sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "请输入第" << i + 1 << "数：" << endl;
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "total：" << sum << endl;
    return 0;
}