#include <iostream>

using namespace std;

class Area {
private:
    float length;
    float breadth;
public:
    /*  1. 参数列表不同
        第一个构造函数：Area() 是默认构造函数，不接受任何参数
        第二个构造函数：Area(float l, float b) 是带参数的构造函数，接受两个整型参数
        2. 成员初始化方式不同
        第一个构造函数：使用初始化列表 (: length(5), breadth(2)) 来初始化成员变量
        第二个构造函数：在函数体内使用赋值操作来设置成员变量的值
        3. 默认值设定不同
        第一个构造函数：将 length 初始化为 5，breadth 初始化为 2（固定值）
        第二个构造函数：允许调用者传入任意值来设置 length 和 breadth
        4. 调用方式不同
        // 第一个构造函数调用方式
        Area area1;  // length=5, breadth=2

        // 第二个构造函数调用方式
        Area area2(10, 8);  // length=10, breadth=8
        5. 性能差异
        第一个构造函数使用初始化列表的方式在性能上更优，因为它直接初始化成员变量，
        而第二个构造函数先默认构造成员变量，然后再进行赋值操作。
     */
    // 无参数构造函数
    Area() : length(5), breadth(2) {}

    // 有两个参数的构造函数
    Area(float l, float b) {
        length = l;
        breadth = b;
    }

    void getLength() {
        cout << "Length: " << length << endl;
    }

    float calculateArea() {
        float area = length * breadth;
        cout << "Area: " << area << endl;
        return area;
    }
};

int main() {
    Area area1;
    area1.getLength();
    area1.calculateArea();

    Area area2(10, 8);
    area2.getLength();
    area2.calculateArea();

    // 拷贝构造函数
    Area area3(area2);
    area3.getLength();
    area3.calculateArea();
    Area area4 = area2;
    area4.getLength();
    area4.calculateArea();

    return 0;
}