# include <iostream>
#include <variant>
using namespace std;

struct Person {
    char name[10];
    int age;
    float salary;
};

// 声明函数
Person getData();

void showInfo(Person);

int main() {
    Person person = getData();
    showInfo(person);
    return 0;
}

Person getData() {
    Person person;

    cout << "输入名字：";
    cin.get(person.name, 50);

    cout << "输入年龄：";
    cin >> person.age;

    cout << "输入工资：";
    cin >> person.salary;
    return person;
}


// 函数调用，结构变量作为参数
void showInfo(Person person) {
    cout << "显示信息" << endl;
    cout << "姓名：" << person.name << endl;
    cout << "年龄：" << person.age << endl;
    cout << "工资：" << person.salary << endl;
}
