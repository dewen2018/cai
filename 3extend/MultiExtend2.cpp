#include <iostream>

using namespace std;


class Mammal {
public:
    Mammal() {
        cout << "I'm a mammal" << endl;
    }

    void move() {
        cout << "I'm moving" << endl;
    }
};

class WingedAnimal {
public:
    WingedAnimal() {
        cout << "I can fly" << endl;
    }

    void move() {
        cout << "I'm flying" << endl;
    }
};

class Bat : public Mammal, public WingedAnimal {
public:
    Bat() {
        cout << "I'm a bat" << endl;
    }

    void move() {
        cout << "I'm xxxx" << endl;
    }
};

// 多重继承
int main() {
    Bat bat;
    //I'm a mammal
    //I can fly
    //I'm a bat

    // 调用base1类的函数
    bat.Mammal::move();
    // 调用base2类的函数
    bat.WingedAnimal::move();
    // 调用子类的函数
    bat.move();
    return 0;
}