#include <iostream>
#include<queue>

using namespace std;

/*
C ++中的优先队列是STL中的派生容器，它仅考虑最高优先级元素。队列遵循FIFO策略，而优先队列根据优先级弹出元素，即，优先级最高的元素首先弹出。

它在某些方面类似于普通队列，但在以下方面有所不同：

在优先队列中，队列中的每个元素都与某个优先级相关联，但是优先级在队列数据结构中不存在。

优先队列中具有最高优先级的元素将被首先删除，而队列遵循FIFO（先进先出）策略，这意味着先插入的元素将被首先删除。

如果存在多个具有相同优先级的元素，则将考虑该元素在队列中的顺序。

注意：优先队列是普通队列的扩展版本，但优先级最高的元素将首先从优先队列中删除。
优先队列的语法
priority_queue<int> variable_name;

优先队列的成员函数
函数	描述
push()	它将新元素插入优先队列。
pop()	它将优先级最高的元素从队列中删除。
top()	此函数用于寻址优先队列的最顶层元素。
size()	返回优先队列的大小。
empty()	它验证队列是否为空。基于验证，它返回队列的状态。
swap()	它将优先队列的元素与具有相同类型和大小的另一个队列交换。
emplace()	它在优先队列的顶部插入一个新元素。
 */
int main() {
//    priority_queue<int> p;  // 变量声明.
//    p.push(10); // 插入 10 到队列, top=10
//    p.push(30); // 插入 30 到队列, top=30
//    p.push(20); // 插入 20 到队列, top=20
//    cout << "可用元素的数量 到 'p' :" << p.size() << endl;
//    while (!p.empty()) {
//        std::cout << p.top() << std::endl;
//        p.pop();
//    }

    priority_queue<int> p;  //优先队列声明
    priority_queue<int> q;  //优先队列声明
    p.push(1); // 插入 '1' 到 p.
    p.push(2); // 插入 '2' 到 p.
    p.push(3); // 插入 '3' 到 p.
    p.push(4); // 插入 '4' 到 p.
    q.push(5); // 插入 '5' 到 q.
    q.push(6); // 插入 '6' 到 q.
    q.push(7); // 插入 '7' 到 q.
    q.push(8); // 插入 '8' 到 q.
    p.swap(q);
    std::cout << "p队列元素是 : " << std::endl;
    while(!p.empty())
    {
        std::cout << p.top() << std::endl;
        p.pop();
    }
    std::cout << "q优先队列元素是 :" << std::endl;
    while(!q.empty())
    {
        std::cout << q.top() << std::endl;
        q.pop();
    }
    return 0;
}