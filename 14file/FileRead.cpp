#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    char id[11], name[21];
    int score;

    ifstream inFile;
    inFile.open("/data/codes/code9/cai/14file/students.txt", ios::in);

    if (!inFile.is_open()) {
        cout << "File open error!" << endl;
        cout << "Cannot find students.txt in current directory." << endl;
        cout << "Please make sure students.txt is in the same directory as the program." << endl;
        return -1;
    }
    cout << "ID" << "\t" << "Name" << "\t" << "Score" << endl;
    while (inFile >> id >> name >> score) {
        cout << id << "\t" << name << "\t" << score << endl;
    }
    inFile.close();
    return 0;
}