#include <iostream>

using namespace std;

void display(char *str);

void display(string);

int main() {
//    char str[] = "C++";
//    cout << str << endl;
//    cout << "sizeof(str) = " << sizeof(str) << endl;
//    cout << "sizeof(str[0]) = " << sizeof(str[0]) << endl;

//    char str2[] =  {'C','+','+','\0'};
//    cout << str2 << endl;
//    cout << "sizeof(str2) = " << sizeof(str2) << endl;

//    char str3[] = {'C','+','+'};
//    cout << str3 << endl;

    // cin>>或cin.get()函数外，还可以使用getline()来获取输入的文本行
    char str4[100];
    cout << "输入字符串：";
    cin.get(str4, 100);
//    cout << "你输入了：" << str4 << endl;
    display(str4);

    string str5;
    cout << "输入字符串2：";
    getline(cin, str5);
//    cout << "你输入了：" << str5 << endl;
    display(str5);


    return 0;
}

void display(char str[]) {
    cout << "输入的字符数组为: " << str << endl;
}

void display(string str) {
    cout << "输入的字符串为: " << str << endl;
}