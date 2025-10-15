#include <iostream>

using namespace std;

// 前置声明
class A;

class Distance {
private:
    int meter;
public:
    Distance() : meter(0) {
    }

    // 友元函数声明
    friend int addFive(Distance);

    // 友元函数声明
    friend int add(A, Distance);
};

class A {
private:
    int a;
public:
    A() : a(10) {
    }

    // 友元函数声明
    friend int add(A, Distance);
};

// 友元函数的定义
int addFive(Distance d) {
    return d.meter + 5;
}

int add(A a, Distance d) {
    return d.meter + a.a;
}

// 如果将函数定义为友元函数，则可以使用函数访问类的私有数据和受保护数据。
// 通过使用关键字friend，编译器知道给定的函数是友元函数。
// 要访问数据，应该在类的内部以关键字friend开始声明友元函数(可以是类内部的任何地方，可以是private部分，也可以是public部分)。
int main() {
    Distance D;
    cout << "meter: " << addFive(D) << endl;

    A a;
    cout << "meter: " << add(A(), D) << endl;
    return 0;
}