//不带指针的引用传递
#include <iostream>

using namespace std;

void swap(int *, int *);

// 不带指针的引用传递
int main() {
    int a = 10, b = 20;
    cout << "Before swap, value of a :" << a << " and b :" << b << endl;
    swap(&a, &b);
    cout << "After swap, value of a :" << a << " and b :" << b << endl;
    return 0;
}

void swap(int *a, int *b) {
    int *temp;
    temp = a;
    a = b;
    b = temp;
}