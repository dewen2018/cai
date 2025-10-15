#include <iostream>
#include <stack>

using namespace std;
/*
这种数据结构使用LIFO技术，其中LIFO表示后进先出。首先插入的元素将在末尾提取，以此类推。有一个名为“top”的元素，它是位于最上面位置的元素。所有插入和删除操作都是在堆栈的顶部元素本身进行的。

应用区域中的堆栈暗示为容器适配器。

容器应支持以下操作列表：

empty

size

back

push_back

pop_back

模板参数
T：参数指定容器适配器将保留的元素的类型。

Container：参数指定容器的内部对象，用于容纳堆栈的元素。

成员类型
下面给出了堆栈成员类型的列表，并对其进行了简短描述。

会员类型	描述
value_type	指定了元素类型。
container_type	指定了基础容器类型。
size_type	它指定元素的大小范围。
函数
借助函数，可以在编程领域中使用对象或变量。堆栈提供了大量可以在程序中使用或嵌入的函数。相同的列表如下：

函数	描述
(constructor)	该函数用于构造堆栈容器。
empty	该函数用于测试堆栈是否为空。如果堆栈为空，则该函数返回true，否则返回false。
size	该函数返回堆栈容器的大小，该大小是堆栈中存储的元素数量的度量。
top	该函数用于访问堆栈的顶部元素。该元素起着非常重要的作用，因为所有插入和删除操作都是在顶部元素上执行的。
push	该函数用于在堆栈顶部插入新元素。
pop	该函数用于删除元素，堆栈中的元素从顶部删除。
emplace	该函数用于在当前顶部元素上方的堆栈中插入新元素。
swap	该函数用于交换引用的两个容器的内容。
relational operators	非成员函数指定堆栈所需的关系运算符。
uses allocator<stack>	顾名思义，非成员函数将分配器用于堆栈。
 */
/**
 * 打印栈中所有元素的函数
 * @param ss 要打印的整数栈（会被复制，不会修改原始栈）
 */
void newstack(stack<int> ss) {
    stack<int> sg = ss;
    // 依次弹出栈顶元素并打印，直到栈为空
    while (!sg.empty()) {
        cout << '\t' << sg.top();
        sg.pop();
    }
    cout << '\n';
}

int main() {
    stack<int> newst;
    newst.push(55);
    newst.push(44);
    newst.push(33);
    newst.push(22);
    newst.push(11);

    cout << "最新的堆栈是 : ";
    newstack(newst);
    cout << "\n newst.size() : " << newst.size();
    cout << "\n newst.top() : " << newst.top();
    cout << "\n newst.pop() : ";
    newst.pop();
    newstack(newst);
    return 0;
}