#include <iostream>

using namespace std;

void display(char = '@', int n = 1);

void display(char a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a;
    }
    cout << endl;
}

int main() {
    display();
    display('*');
    display('+', 10);
    return 0;
}
