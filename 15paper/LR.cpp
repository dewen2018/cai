#include <iostream>

using namespace std;
const double PI = 3.1415926;

int main() {
    double r;
    cout << "请输入圆的半径：";
    cin >> r;
    cout << "圆的面积是：" << PI * r * r << endl;
    cout << "圆的周长是：" << 2 * PI * r << endl;
    return 0;
}