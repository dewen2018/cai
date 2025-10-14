#include <iostream>

using namespace std;

// C ++中的地址
// int c, *pc;
// pc=c;  /* 错误！  pc是地址，而c不是地址。 */
// *pc=&c; /*错误！  * pc是地址指向的值，而&c是地址。*/
// pc=&c; /* 正确！  pc是一个地址，&c也是一个地址。 */
// *pc=c; /* 正确！  * pc是地址指向的值，而c也是一个值。 */
int main() {
//    int var1 = 3;
//    int var2 = 24;
//    int var3 = 17;
//    cout << &var1 << endl;
//    cout << &var2 << endl;
//    cout << &var3 << endl;

    // 声明指针变量
//    int *ptr1;
//    int* ptr2;


    int *pc, c;
    c = 5;
    cout << "Address of c (&c): " << &c << endl;
    cout << "Value of c (c): " << c << endl;

    pc = &c;
    cout << "Address of pointer (pc): " << pc << endl;
    cout << "Content of pointer ( *pc): " << *pc << endl;

    *pc = 7;
    cout << "Address of c (&c): " << &c << endl;
    cout << "Value of c (c): " << c << endl;
    return 0;
}