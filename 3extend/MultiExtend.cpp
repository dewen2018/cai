#include <iostream>

using namespace std;

// 基类 Shape
class Shape {

protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    void setWidth(int a) {
        width = a;
    }

    void setHeight(int b) {
        height = b;
    }

//    int getArea() {
//        return (width * height);
//    }
};

// 基类 PaintCost
class PaintCost {
public:
    int getCost(int area) {
        return area * 70;
    }
};

class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return (width * height);
    }
};

// 多重继承
int main() {
    Rectangle Rect;
    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    // 输出对象的面积
    cout << "Total area: " << area << endl;

    // 输出对象的总花费
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;

    return 0;
}