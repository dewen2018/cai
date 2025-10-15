#include <iostream>

using namespace std;

class Weapon {
public:
    // 纯虚函数
    // 声明以结尾的=0虚函数称为纯虚函数
    virtual void features() = 0;
};

class Bomb : public Weapon {
public:
    void features() {
        cout << "装载刀的特性。\n";
    }
};

class Gun : public Weapon {
public:
    void features() {
        cout << "加载枪的特性。\n";
    }
};

class Knife : public Weapon {
public:
    void features() override {
        cout << "装载刀的特性。\n";
    }
};

class Bow : public Weapon {
public:
    void features() override {
        cout << "装载弓特性。\n";
    }
};

class Loader {
public:
    static void loadFeatures(Weapon *weapon) {
        weapon->features();
    }
};

int main() {
    Loader *l = new Loader;
    Weapon *w;
    Bomb b;
    w = &b;
    l->loadFeatures(w);
    Gun g;
    w = &g;
    l->loadFeatures(w);

    Knife k;
    w = &k;
    l->loadFeatures(w);

    Bow bow;
    w = &bow;
    l->loadFeatures(w);
    return 0;
}