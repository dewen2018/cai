#include <iostream>
using namespace std;

class Person {
public:
    string profession;
    int age;

    void display() {
        cout << "我的职业是: " << profession << endl;
        cout << "我的年龄是: " << age << endl;
        walk();
        talk();
        eat();
    }

    Person() : profession("unemployed"), age(16) {
    }

    void talk() {
        cout << "我会说话。" << endl;
    };

    void walk() {
        cout << "我会走路。" << endl;
    }

    void eat() {
        cout << "我会吃饭。" << endl;
    }
};

class MathTeacher : public Person {
public:
    void teachMaths() {
        cout << "我会教数学。" << endl;
    }
};

class Footballer : public Person {
public:
    void playFootball() {
        cout << "我会踢足球。" << endl;
    }
};

int main() {
    MathTeacher teacher;
    teacher.profession = "老师";
    teacher.age = 20;
    teacher.display();
    teacher.teachMaths();

    Footballer footballer;
    footballer.profession = "运动员";
    teacher.age = 21;
    footballer.display();
    footballer.playFootball();
}
