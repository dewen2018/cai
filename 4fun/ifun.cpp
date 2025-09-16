#include "iostream"

using namespace std;

inline int add(int a, int b) {
    return a + b;
}


bool prime(int n) {
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            cout << "Not prime" << endl;
//            return;
//        }
//    }
//    cout << "Prime" << endl;
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}


int main() {
    cout << add(1, 2) << endl;

    bool isPrime = prime(5);
    cout << isPrime << endl;
    return 0;
}