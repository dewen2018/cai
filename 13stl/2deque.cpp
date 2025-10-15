#include <iostream>
#include <deque>

using namespace std;

/*
C ++双端队列函数
方法	描述
assign()	它分配新内容并替换旧内容。
emplace()	它将在指定位置添加一个新元素。
emplace_back()	它在末尾添加一个新元素。
emplace_front()	它在双端队列的开头添加一个新元素。
insert()	它在指定位置之前添加一个新元素。
push_back()	它在容器的末尾添加一个新元素。
push_front()	它在容器的开头添加一个新元素。
pop_back()	它从双端队列中删除最后一个元素。
pop_front()	它从双端队列中删除第一个元素。
swap()	它交换两个双端队列的内容。
clear()	它将删除双端队列的所有内容。
empty()	它检查容器是否为空。
erase()	它删除元素。
max_size()	它确定双端队列的最大大小。
resize()	它改变了双端队列的大小。
shrink_to_fit()	它减少了内存以适合双端队列的大小。
size()	它返回元素数。
at()	它访问位置pos处的元素。
operator[]()	它访问位置pos处的元素。
operator=()	它将新的内容分配给容器。
back()	它访问最后一个元素。
begin()	它将迭代器返回到双端队列的开头。
cbegin()	它向双端队列的开头返回一个常量迭代器。
end()	它将迭代器返回到末尾。
cend()	它将常量迭代器返回到末尾。
rbegin()	它将反向迭代器返回到开头。
crbegin()	它将常量反向迭代器返回到开头。
rend()	它将反向迭代器返回到末尾。
crend()	它将常量反向迭代器返回到末尾。
front()	它访问最后一个元素。
 */
int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.push_back(50);
    dq.push_front(60);
    dq.push_back(70);
    dq.push_front(80);
    dq.push_back(90);
    dq.push_front(100);
    dq.push_back(110);
    // 整个队列打印
//    for (auto i:dq) {
//        cout << i << " ";
//    }
    // 打印大小
    cout << "size: " << dq.size() << endl;

    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
}