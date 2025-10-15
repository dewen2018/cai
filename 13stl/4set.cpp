/*
 set介绍
集合是C ++ STL（标准模板库）的一部分。集合是存储排序键的关联容器，其中每个键都是唯一的，可以插入或删除但不能更改。

语法
template < class T,                             // set::key_type/value_type
           class Compare = less<T>,        // set::key_compare/value_compare
           class Alloc = allocator<T>         // set::allocator_type
           > class set;
参数
T：存储在容器集中的元素类型。

Compare：一个比较类，它接受两个具有相同bool类型的参数并返回一个值。此参数是可选的，二进制谓词less <T>是默认值。

Alloc：分配器对象的类型，用于定义存储分配模型。

成员函数
以下是set的所有成员函数的列表：

构造函数/析构函数
函数	描述
(constructor)	构造集
(destructor)	set析构函数
operator=	将集合的元素复制到另一个集合。
迭代器
函数	描述
begin	返回一个指向集合中第一个元素的迭代器。
cbegin	返回指向集合中第一个元素的const迭代器。
end	返回指向末尾的迭代器。
cend	返回指向末尾的常量迭代器。
rbegin	返回指向末尾的反向迭代器。
rend	返回指向起点的反向迭代器。
crbegin	返回指向末尾的常量反向迭代器。
crend	返回指向起点的常量反向迭代器。
容量
函数	描述
empty	如果set为空，则返回true。
size	返回集合中元素的数量。
max_size	返回集合的最大大小。
修饰符
函数	描述
insert	在集合中插入元素。
erase	从集合中擦除元素。
swap	交换集合的内容。
clear	删除集合中的所有元素。
emplace	构造新元素并将其插入到集合中。
emplace_hint	通过提示构造新元素并将其插入到集合中。
观测比较
函数	描述
key_comp	返回一个用于元素间值比较的函数。
value_comp	返回一个用于比较元素间的值的函数。
操作查找
函数	描述
find	搜索具有给定键的元素。
count	获取与给定键匹配的元素数。
lower_bound	返回指向大于（或等于）某值的第一个元素的迭代器。
upper_bound	返回大于某个值元素的迭代器。
equal_range	返回集合中与给定值相等的上下限的两个迭代器。
分配器
函数	描述
get_allocator	返回用于构造集合的分配器对象。
非成员重载函数
函数	描述
operator==	检查两组是否相等。
operator!=	检查两组是否相等。
operator<	检查第一组是否小于其他组。
operator<=	检查第一组是否小于或等于其他。
operator>	检查第一个集合是否大于其他集合。
operator>=	检查第一个集合是否大于其他集合。
swap()	交换两组元素。
 */