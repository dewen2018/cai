#include <iostream>

using namespace std;

//必须提前声明class B不然编译会报错
class B;

class A {
private:
    int a;
public:
    friend class B;

    A() : a(10) {
        cout << "A 构造函数" << endl;
//        a = 10;
    }

    ~A() {
        cout << "A 析构函数" << endl;
    }

    void display(B &b);
};


class B {
private:
    int b;
public:
    friend class A;

    B() : b(12) {
        cout << "B 构造函数" << endl;
//        b = 12;
    }

    ~B() {
        cout << "B 析构函数" << endl;
    }

    void display(A &a) {
        cout << "a=" << a.a;
        cout << " b=" << b << endl;
    }
};

//移到B类定义之后，此时B已经是完整类型
//函数不能放在class A 中，不然会编译报错
void A::display(B &b) {
    cout << "a=" << a;
    cout << " b=" << b.b << endl;
}

// 互为友元类的做法就是，在class A中声明friend class B;在classB 中声明friend class A;
int main() {
    A a;
    B b;
    a.display(b);
    b.display(a);
}