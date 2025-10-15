#include <iostream>
#include <vector>

using namespace std;

/*
C ++向量函数
函数
描述
at(idx)	传回索引idx所指的数据，如果idx越界，抛出out_of_range。
back()	返回最后一个原始，不检查这个数据是否存在。
front()	返回第一个元素。
swap()	交换两个Vector。
push_back()	在Vector最后添加一个元素。
pop_back()	它从向量中删除最后一个元素。
empty()	判断Vector是否为空（返回true时为空）
insert()	它将在指定位置插入新元素。
erase()	删除指定的元素。
resize()	它修改向量的大小。
clear()	它从向量中删除所有元素。
size()	返回Vector元素数量的大小。
capacity()	返回vector所能容纳的元素数量(在不重新分配内存的情况下）
assign()	它将新值分配给向量。
operator=()	它将新值分配给向量容器。
operator[]()	它访问指定的元素。
end()	返回最末元素的迭代器(实指向最末元素的下一个位置)
emplace()	它将在位置pos之前插入一个新元素。
emplace_back()	它在末尾插入一个新元素。
rend()	它指向向量的第一个元素之前的元素。
rbegin()	它指向向量的最后一个元素。
begin()	返回第一个元素的迭代器。
max_size()	返回Vector所能容纳元素的最大数量（上限）。
cend()	它指向量中的last-last-element。
cbegin()	它指向量的第一个元素。
crbegin()	它指的是向量的最后一个字符。
crend()	它指的是向量的第一个元素之前的元素。
data()	它将向量的数据写入数组。
shrink_to_fit()	它减少了容量并使它等于向量的大小。
 */
int main() {
    vector<int> vec;

    // 显示 vec 的原始大小
    cout << "原始大小为：" << vec.size() << endl;

    // 添加 7 个 元素
    for (int i = 0; i < 7; i++) {
        vec.push_back(i + 1);
    }

    // 显示扩容后的 vec 的大小
    cout << "扩容后的大小为：" << vec.size() << endl;

    // 访问向量中的 5 个值
    for (int i = 0; i < 5; i++) {
        cout << " vec [" << i << "] 的值= " << vec[i] << endl;
    }

    // 使用迭代器 iterator 访问值
    vector<int>::iterator iter = vec.begin();
    while (iter != vec.end()) {
        cout << "v 的值 = " << *iter << endl;
        iter++;
    }

    // 使用范围 for 访问值
    cout << "使用范围 for 访问值：" << endl;
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
        cout << "v 的值 = " << *iter << endl;
    }

//    for (int i = 0; i < vec.size(); i++){
//        cout << "vec[" << i << "] 的值 = " << vec[i] << endl;
//    }

    vec.clear();

    cout << "vec 的大小为：" << vec.size() << endl;
    return 0;
}