#include <iostream>

using namespace std;

class Pointer {
public:
    int a;
    int *p;

    Pointer() {
        a = 100;
        p = new int(10);
    }

    Pointer(const Pointer &tem) {
        if (this != &tem) {
            a = tem.a;
            p = tem.p;
        }
    }
};

// 使程序输出的结果为 100, 10, 1 0, 5, 1
int main() {
    Pointer p1;
    Pointer p2(p1);
    cout << p1.a << "\t" << *p1.p << "\t" << (p1.p == p2.p) << endl;
    *p1.p = 5;
    p2.a = 20;
    cout << (p1.a == p2.a) << "\t" << *p1.p << "\t" << (p1.p == p2.p) << endl;
}