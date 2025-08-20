#include <iostream>
#include <ctime>

int main() {
    // std::cout << "hello" << "world" << std::endl;
    // 随机生成一个数组
    // 问题分析：生成的数字不随机是因为没有初始化随机数种子。
    // 在C++中，rand()函数在没有设置种子的情况下会使用默认种子值，导致每次程序运行时生成的随机数序列相同。
    srand(time(0));
    int a[5];
    for (int i = 0; i < 5; i++) {
        a[i] = rand() % 50;
    }
    // 输出 a 的长度
    // sizeof(a) 返回的是整个数组 a 占用的内存字节数
    // 在大多数系统上，int 类型占用4个字节
    int len = sizeof(a) / sizeof(a[0]);
    std::cout << "数组长度是:" << len << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << std::endl;
    }
    return 0;
}
