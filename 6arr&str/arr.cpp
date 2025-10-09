#include <iostream>

using namespace std;

int main() {
    int marks[5] = {10, 20, 30, 40, 50};
    int size = sizeof(marks) / sizeof(marks[0]);
    cout << "数组长度为：" << size << endl;
    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }

    // 打印数组的第一个元素
    cout << marks[0] << endl;

    // 将第4个元素改为9
    marks[3] = 9;
    cout << "第4个元素" << marks[3] << endl;

    // 从用户获取输入并插入第三个元素
    cout << "请输入第三个元素：" << endl;
    cin >> marks[2];
    cout << "第三个元素为：" << marks[2] << endl;

    // 接受用户输入并插入第（i + 1）个元素
    int i;
    cin >> i;
    cin >> marks[i];
    cout << "第" << i + 1 << "个元素为：" << marks[i] << endl;
    return 0;
}