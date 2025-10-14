#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "请输入一个整数：";
    cin >> num;
    float *ptr;

    // 内存分配
    ptr = new float[num];

    cout << "输入学生的成绩" << endl;
    for (int i = 0; i < num; ++i) {
        cout << "第" << i + 1 << "个学生的成绩：";
        cin >> *(ptr + i);
    }
    cout << "学生的成绩为：" << endl;
    for (int i = 0; i < num; ++i) {
        cout << "学生" << i + 1 << "的分数是：" << *(ptr + i) << "  ";
    }

    // 内存释放
    delete[] ptr;
    return 0;
}