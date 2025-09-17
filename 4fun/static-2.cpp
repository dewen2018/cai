#include <iostream>

using namespace std;

static int count = 25;

void func() {
    static int i = 8;
    i++;
    cout << "变量 i 为 " << i;
    cout << " 变量 count 为 " << count << endl;
}

int main() {
    while (count--) {
        func();
    }
    return 0;
}