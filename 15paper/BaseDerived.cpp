#include <iostream>

using namespace std;

class Base {
public:
    virtual void func() {
        cout << "Base::func()" << endl;
    }

//    ~Base() {
//        cout << "~Base()" << endl;
//    }
};

class Derived : public Base {
public:
    void func() override {
        cout << "Derived::func()" << endl;
    }

//    ~Derived() {
//        cout << "~Derived()" << endl;
//    }
};

void FunTest() {
    Base b;
    Derived d;

    b.func();
    d.func();
}

int main() {
    FunTest();
    return 0;
}