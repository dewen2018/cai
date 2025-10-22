#include <iostream>
#include <fstream>

using namespace std;

int main() {
//    ifstream in("3cout.cpp");
//    ofstream out("3coutxuhao.cpp");
    fstream inf, outf;
    inf.open("/data/codes/code9/cai/15paper/3cout.cpp", ios::in);
    outf.open("/data/codes/code9/cai/15paper/3coutxuhao.cpp", ios::out);
    char ch[80];

    int i = 0;
//    while (!inf.eof()) {
//        inf.getline(ch, sizeof(ch));
//        outf << ++i << ": " << ch << endl;
//    }
    while (inf.getline(ch, sizeof(ch))) {
        outf << ++i << ": " << ch << endl;
    }
    inf.close();
    outf.close();
    return 0;
}