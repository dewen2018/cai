#include <iostream>

using namespace std;

// 函数声明中的形式参数int m [5]转换为int * m;。 该指针指向由数组marks指向的相同地址。
// 这就是原因，尽管该函数是在用户定义的函数中使用不同的数组名称m[5]进行操作，但是原始数组仍在marks进行操作。
// C ++以这种方式处理将数组传递给函数以节省内存和时间。
void display(int scores[5]);

int main() {
    int scores[] = {10, 20, 30, 40, 50};
    // 将数组作为参数传递给函数时，仅将数组名称用作参数。
    display(scores);
    return 0;
}

void display(int scores[5]) {
    cout << "显示分数: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << endl;
    }
}