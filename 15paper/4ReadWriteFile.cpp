#include <iostream>
#include <fstream>

using namespace std;

void input(int y[], int n) {
    ifstream inf("3cout.cpp", ios::in);
    for (int i = 0; i < n; i++) {
        inf >> y[i];
    }
    inf.close();
}

void output(int y[], int n) {
    ofstream outf("3coutxuhao.cpp", ios::out);
    for (int i = 0; i < n; i++) {
        outf << y[i] << "\n";
    }
    outf.close();
}

void sort(int y[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (y[j] > y[j + 1]) {
                int temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }
    }
}

int main() {
    int y[10], n;
    cout << "请输入需要读取的整数的个数：" << endl;
    cin >> n;
    input(y, n);

    sort(y, n);

    output(y, n);
    return 0;
}

