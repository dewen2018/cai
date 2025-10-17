#include <iostream>

using namespace std;

class Exa {
    int a;

public:

    /*
     定义了一个名为Exa的构造函数，具有默认参数值9
    构造函数体内将参数b的当前值赋给成员变量a
    b++是后置递增操作，但递增后的值未被使用
    注意： 由于b++的特性，a实际获得的是b的原始值，而b会在赋值后自增1（但这个自增对a没有影响）。
     ++b就会*******
     */
    Exa(int b = 9) {
//        a = b++;
        a = ++b;
    }

    void print() {
        a = a + 1;
        cout << a << endl;
    }

    void print() const {
        cout << a << endl;
    }
};

int main() {
    Exa e;
    const Exa e1(2);
    e.print();

    e1.print();
}