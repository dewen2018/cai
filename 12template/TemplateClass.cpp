#include <iostream>

using namespace std;

template<class T>
class Calculator {
private:
    T a, b;
public:
    Calculator(T a, T b) {
        this->a = a;
        this->b = b;
    }

    T add() {
        return a + b;
    }

    T sub() {
        return a - b;
    }

    T mul() {
        return a * b;
    }

    T div() {
        return a / b;
    }

    void display() {
        cout << "Numbers are: " << a << " and " << b << "." << endl;
        cout << "Addition is: " << add() << endl;
        cout << "Subtraction is: " << sub() << endl;
        cout << "Product is: " << mul() << endl;
        cout << "Division is: " << div() << endl;
    }

    ~Calculator() {
        cout << "析构函数" << endl;
    }
};

int main() {
    Calculator<int> c1(10, 5);
    c1.display();
    Calculator<float> c2(10.5, 5.5);
    c2.display();
}