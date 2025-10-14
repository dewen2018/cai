#include <iostream>

using namespace std;

class Memory2 {
private:
    int num;
    float *ptr;
public:
    Memory2() {
        cout << "请输入一个整数：";
        cin >> num;

        // 内存分配
        ptr = new float[num];

        cout << "输入学生的成绩" << endl;
        for (int i = 0; i < num; ++i) {
            cout << "第" << i + 1 << "个学生的成绩：";
            cin >> *(ptr + i);
        }
    }

    ~Memory2() {
        cout << "释放内存" << endl;
        delete[] ptr;
    }

    void display() {
        cout << "学生的成绩为：" << endl;
        for (int i = 0; i < num; ++i) {
            cout << "学生" << i + 1 << "的分数是：" << *(ptr + i) << endl;
        }
    }
};

// 创建对象m时，将调用构造函数，该构造函数为num个浮点数据分配内存。
// 当对象被销毁时，即，对象超出范围时，将自动调用析构函数。
int main() {
    Memory2 m;
    m.display();
    return 0;
}