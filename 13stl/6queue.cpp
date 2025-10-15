#include <iostream>
#include <queue>

using namespace std;

/*
 此数据结构适用于FIFO技术，其中FIFO表示先进先出。首先插入的元素将首先被提取，依此类推。有一个称为“前”的元素，它是位于最前位置或位于第一个位置的元素，也有一个名为“后”的元素，它是位于最后位置的元素。在普通队列中，元素的插入在尾部，而删除则从前面开始。

应用程序区域中的队列隐含为容器适配器。

容器应支持以下操作列表：

empty

size

push_back

pop_front

front

back

模板参数
T：参数指定容器适配器将保留的元素的类型。

Container：参数指定容器的内部对象，其中保留队列的元素。

成员类型
下面给出了队列成员类型的列表，并对其进行了简短描述。

成员类型	描述
value_type	指定了元素类型。
container_type	指定了底层容器类型。
size_type	它指定元素的大小范围。
reference	它是容器的引用类型。
const_reference	它是常量容器的引用类型。
函数
借助函数，可以在编程领域中使用对象或变量。队列提供了大量可以在程序中使用或嵌入的函数。相同的列表如下：

函数	描述
(constructor)	该函数用于构造队列容器。
empty	该函数用于测试队列是否为空。如果队列为空，则该函数返回true，否则返回false。
size	该函数返回队列中元素的个数。
front	该函数返回第一个元素。元素起着非常重要的作用，因为所有的删除操作都是在front元素上执行的。
back	该函数返回最后一个元素。该元素起着非常重要的作用，因为所有插入操作都在后面元素上执行。
push	该函数用于在末尾插入一个新元素。
pop	该函数用于删除第一个元素。
emplace	该函数用于在当前后元素上方的队列中插入新元素。
swap	该函数用于交换参考中两个容器的内容。
relational operators	非成员函数指定队列所需的关系运算符。
uses allocator<queue>	顾名思义，非成员函数将分配器用于队列。
 */

void showsg(queue<int> sg) {
    queue<int> ss = sg;
    while (!ss.empty()) {
        cout << '\t' << ss.front();
        ss.pop();
    }
    cout << '\n';
}

int main() {
    queue<int> fquiz;
    fquiz.push(10);
    fquiz.push(20);
    fquiz.push(30);

    cout << "队列fquiz是 : ";
    showsg(fquiz);

    cout << "\nfquiz.size() : " << fquiz.size();
    cout << "\nfquiz.front() : " << fquiz.front();
    cout << "\nfquiz.back() : " << fquiz.back();

    cout << "\nfquiz.pop() : ";
    fquiz.pop();
    showsg(fquiz);

    return 0;
}