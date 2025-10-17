#include <iostream>

using namespace std;


class Test {
public:
    static int x;

    Test(int i = 5) {
        x = x + i;
    }

    int GetNum() {
        return Test::x + 7;
    }

    ~Test() {
    }
};

int Test::x = 73;

int main() {
    Test t1;
    cout << t1.GetNum() << endl;
    return 0;
}