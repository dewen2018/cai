#include <iostream>

using namespace std;

class Test {
private:
    int a;
    float b;
public:
    // 构造含税
    Test() {
        a = 0;
        b = 0;
    }

    // 构造含税
    Test(int a, float b) {
        this->a = a;
        this->b = b;
    }

    void setData(int x, float y) {
        a = x;
        b = y;
    }

    int getA() {
        return a;
    }

    float getB() {
        return b;
    }
};

int main() {
    Test t;
    t.setData(10, 20.5);
    cout << t.getA() << " " << t.getB() << endl;

    Test t1(12, 30.0);
    cout << t1.getA() << " " << t1.getB() << endl;
    return 0;
}