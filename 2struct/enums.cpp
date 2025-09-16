# include <iostream>

using namespace std;
// 枚举类型
enum week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// 更改枚举的默认值
enum seasons {
    Spring = 1,
    Summer = 2,
    Fall = 3,
    Winter = 4
};

// 枚举变量仅取许多可能值中的一个值。
enum suit {
    club = 0,
    diamond = 1,
    heart = 2,
    spade = 3
};

enum designFlags {
    BOID = 1,
    ITALICS = 2,
    UNDERLINE = 3,
};

int main() {
    week today;
    today = Monday;
    cout << "Today is " << today + 1 << endl << endl;

    seasons season;
    season = Fall;
    cout << "Season is " << season << endl << endl;

    suit card;
    card = heart;
    cout << "suit变量的大小 " << sizeof(card) << " bytes" << endl;
    cout << "card变量的值 " << card << endl << endl;

    int flag = BOID | ITALICS;
    cout << "flag变量的大小 " << sizeof(flag) << " bytes" << endl;
    cout << "flag变量的值 " << flag << endl;
    return 0;
}