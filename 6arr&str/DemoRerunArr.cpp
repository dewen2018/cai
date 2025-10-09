#include <iostream>

using namespace std;

int *getRandom() {
    static int r[8];

    // 设置种子
    srand((unsigned) time(NULL));

    for (int i = 0; i < 8; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}

int main() {
    int *p;
    p = getRandom();
    for (int i = 0; i < 8; ++i) {
        cout << "*(p + " << i << ") : " << *(p + i) << endl;
        // 打印地址
        cout << "p + " << i << " : " << p + i << endl;
    }
    return 0;
}