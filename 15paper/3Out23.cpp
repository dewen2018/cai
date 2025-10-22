#include <iostream>

using namespace std;

class Sample {
private:
    int x, y;
public:
    Sample(int a, int b);

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

Sample::Sample(int a, int b) {
    x = a;
    y = b;
}

int main() {
//    Sample *s = new Sample(2, 3);
//    s->display();
//
//    Sample *p = &*s;
//    p->display();
    Sample s(2, 3);
    Sample *p = &s;
    p->display();
    return 0;
}