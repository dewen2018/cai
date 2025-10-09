#include <iostream>

int main() {
    // 二维数组。它最多可容纳12个元素。
//    int marr[3][4];
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            std::cout << "Enter the value for element " << i << " " << j << ": ";
//            std::cin >> marr[i][j];
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            std::cout << "Element " << i << " " << j << ": " << marr[i][j] << std::endl;
//        }
//    }

    // 二维数组的初始化
    int marr[3][4] = {
            {1, 2,  3,  4},
            {5, 6,  7,  8},
            {9, 10, 11, 12}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Element " << i << " " << j << ": " << marr[i][j] << std::endl;
        }
    }

    // 二维数组的初始化
    int marr2[3][4] = {1, 2, 3, 4,
                       5, 6, 7, 8,
                       9, 10, 11, 12};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Element " << i << " " << j << ": " << marr2[i][j] << std::endl;
        }
    }

    // 三维数组的初始化
    int test[2][3][4] = {3, 4, 2, 3,
                         0, -3, 9, 11,
                         23, 12, 23, 2,
                         13, 4, 56, 3,
                         5, 9, 3, 5,
                         5, 1, 4, 9};

    int test2[2][3][4] = {
            {{3,  4, 2,  3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
            {{13, 4, 56, 3}, {5, 9,  3, 5},  {3,  1,  4,  9}}
    };
    return 0;
}