#include <iostream>

int main() {
    bool flag = true;
    int count = 0;
    while (flag) {
        count++;
        std::cout << "count值：" << count << std::endl;
        if (count % 10 == 0) {
            flag = false;
        }
    }
    return 0;
}
