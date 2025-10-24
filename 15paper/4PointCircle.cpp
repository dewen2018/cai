#include <iostream>

using namespace std;
const double PI = 3.1415926535897932384626433832795;

class Point {
protected:
    double x, y;
public:
//    Point(int px, int py) {
//        x = px;
//        y = py;
//    }
    Point(double xx = 0, double yy = 0) : x(xx), y(yy) {
    }

    ~Point() {
        cout << "Point 析构函数" << endl;
    }

    void input() {
        cout << "Input x: ";
        cin >> x;
        cout << "Input y: ";
        cin >> y;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    void show();

    void setPoint(double, double);

};

void Point::show() {
    cout << "x: " << x << " y: " << y << endl;
}

void Point::setPoint(double xx, double yy) {
    x = xx;
    y = yy;
}


class Circle : public Point {
private:
    double r;
public:
    Circle(double xx = 0, double yy = 0, double rr = 0) : Point(xx, yy), r(rr) {
    }

    ~Circle() {
        cout << "Circle 析构函数" << endl;
    }

    void input() {
        Point::input();
        cout << "Input r: ";
        cin >> r;
    }

    void show();

    void setCircle(double, double, double);
};

void Circle::show() {
    Point::show();
    cout << " r: " << r << endl;
}

void Circle::setCircle(double xx, double yy, double rr) {
    Point::setPoint(xx, yy);
    r = rr;
}


int main() {
    Circle c;
    cout << "Input Circle: " << endl;
    c.input();
    c.show();
    cout << "Circle area: " << PI * c.getX() * c.getY() << endl;
    return 0;
}