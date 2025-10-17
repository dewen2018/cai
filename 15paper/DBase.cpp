#include <iostream>

using namespace std;

class Base {
public:
private:
    int radius, width;
public:
    Base() {
        cout << "Base 默认无参构造函数" << endl;
    }

    Base(int r, int w) : radius(r), width(w) {
        cout << "Base 带2个参构造函数" << endl;
    }

    ~Base() {
        cout << "Base 析构函数" << endl;
    }
};

class D_Base {
private:
    int price;
    Base ty;
public:
    D_Base(int p, int r, int w) : price(p), ty(r, w) {
        cout << "D_Base 带3个参构造函数" << endl;
    }

    ~D_Base() {
        cout << "D_Base 析构函数" << endl;
    }
};

int main() {
    D_Base db(10, 20, 30);
    return 0;
}