#include <iostream>
using namespace std;
#include "string"

struct stuct {
    int age;
    string name;
};

int main() {
    bool flag = true;
    // 假设最多存储100个学生信息
    stuct arr[100];
    int index = 0;
    while (flag) {
        int age;
        string name;

        std::cout << "请输入你的年龄：";
        std::cin >> age;
        if (age <= 0) {
            cout << "输入的数字有误，退出！" << std::endl;
            return 0;
        }


        std::cout << "请输入你的姓名：";
        std::cin >> name;
        std::cout << "你的年龄是：" << age << "，你的姓名是：" << name << std::endl;
        // 修复第22行：使用逐字段赋值代替大括号初始化赋值
        arr[index].age = age;
        arr[index].name = name;
        index++;

        std::cout << "现在一共有" << index << "个学生" << std::endl;
        for (int i = 0; i < index; i++) {
            std::cout << arr[i].name << std::endl;
        }
        // 简单的退出条件
        if (index >= 100) flag = false;
    }
}
