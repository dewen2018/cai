#include <iostream>

using namespace std;

class Date {
private:
    int year, month, day;
public:
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }


    friend void PrintDate(Date &);
};

void PrintDate(Date &d) {
    cout << d.year << "/" << d.month << "/" << d.day << endl;
}

int main() {
    Date d1(2023, 4, 1), d2(2023, 10, 1);
    PrintDate(d1);
    PrintDate(d2);
    return 0;
}