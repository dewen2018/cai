#include <iostream>

using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
//    void display() {
//        cout << "Class B" << endl;
//    }
};

class C : public B {
};

// 多层继承
//编译器首先在类C中查找display()函数。由于该函数在该类中不存在，因此它将在类B中查找该函数（因为C是从B派生的）。
// 如果B中没有该函数，则在A中查找该函数，因此它将在类A中查找该函数（因为B是从A派生的）。
int main() {
    C obj;
    obj.display();
    return 0;
}