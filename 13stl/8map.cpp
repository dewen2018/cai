#include <string.h>
#include <iostream>
#include <map>
#include <utility>

using namespace std;
/*
以下是map的所有成员函数的列表：

构造函数/析构函数
函数	描述
constructors	构造map
destructors	map析构函数
operator=	将map元素复制到另一个map容器。
迭代器
函数	描述
begin	返回指向map中第一个元素的迭代器。
cbegin	返回指向map中第一个元素的const迭代器。
end	返回指向末尾的迭代器。
cend	返回指向末尾的常量迭代器。
rbegin	返回指向末尾的反向迭代器。
rend	返回指向起点的反向迭代器。
crbegin	返回指向末尾的常量反向迭代器。
crend	返回指向起点的常量反向迭代器。
容量
函数	描述
empty	如果map为空，则返回true。
size	返回map中的元素数。
max_size	返回map的最大容量。
元素访问
函数	描述
operator[]	用给定的键检索元素。
at	用给定的键检索元素。
修饰符
函数	描述
insert	在map中插入元素。
erase	从map上擦除元素。
swap	交换map内容。
clear	删除map的所有元素。
emplace	构造新元素并将其插入map。
emplace_hint	通过提示构造新元素并将其插入map。
观测器
函数	描述
key_comp	返回键比较对象的副本。
value_comp	返回值比较对象的副本。
操作方式
函数	描述
find	搜索具有给定键的元素。
count	获取与给定键匹配的元素数。
lower_bound	返回迭代器的下限。
upper_bound	返回一个迭代器到上限。
equal_range	返回与给定键匹配的元素范围。
分配器
函数	描述
get_allocator	返回用于构造map的分配器对象。
非成员重载函数
函数	描述
operator==	检查两个map是否相等。
operator!=	检查两个map是否相等。
operator<	检查第一个map是否小于其他map。
operator<=	检查第一个map是否小于或等于其他map。
operator>	检查第一个map是否大于其他map。
operator>=	检查第一个map是否大于其他map。
swap()	交换两个map的元素。
 */
int main() {
    map<int, string> Employees;
    // 1) 使用数组索引符号进行赋值
    Employees[101] = "Nikita";
    Employees[105] = "John";
    Employees[103] = "Dolly";
    Employees[104] = "Deep";
    Employees[102] = "Aman";
    cout << "Employees[104]=" << Employees[104] << endl << endl;
    cout << "Map 大小: " << Employees.size() << endl;
    cout << endl << "自然顺序:" << endl;
//    for (map<int, string>::iterator ii = Employees.begin(); ii != Employees.end(); ++ii) {
    for (auto ii = Employees.begin(); ii != Employees.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
    cout << endl << "相反顺序:" << endl;
//    for (map<int, string>::reverse_iterator ii = Employees.rbegin(); ii != Employees.rend(); ++ii) {
    for (auto ii = Employees.rbegin(); ii != Employees.rend(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}