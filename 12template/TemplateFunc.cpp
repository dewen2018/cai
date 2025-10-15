#include <iostream>

using namespace std;

template<typename T>

void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before Swap: a=" << a << " b=" << b << endl;
    Swap(a, b);
    cout << "After Swap: a=" << a << " b=" << b << endl;

    float c = 10.5, d = 20.5;
    cout << "Before Swap: c=" << c << " d=" << d << endl;
    Swap(c, d);
    cout << "After Swap: c=" << c << " d=" << d << endl;

    char e = 'a', f = 'b';
    cout << "Before Swap: e=" << e << " f=" << f << endl;
    Swap(e, f);
    cout << "After Swap: e=" << e << " f=" << f << endl;
    return 0;
}