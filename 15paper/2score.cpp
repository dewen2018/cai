#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

class Student {
private:
public:
    char name[30];
    int score;

    // 用于排序的比较函数
    static bool scoreCompare(const Student &e1, const Student &e2) {
        return e1.score > e2.score;  // 成绩从高到低排序
    }

    // 重载输入运算符，方便从文件读取数据
    friend istream &operator>>(istream &is, Student &s) {
        return is >> s.name >> s.score;
    }

    // 重载输出运算符，方便显示和写入文件
    friend ostream &operator<<(ostream &os, const Student &s) {
        return os << s.name << " " << s.score;
    }
};

int main() {
    // 读取C盘根目录的score.txt文件
    ifstream fin("/data/codes/code9/cai/15paper/score.txt");
    // 创建输出文件out.txt
    ofstream fout("/data/codes/code9/cai/15paper/out.txt");

    // 检查文件是否成功打开
    if (!fin) {
        cout << "无法打开输入文件 /data/codes/code9/cai/15paper/score.txt" << endl;
        return 1;
    }

    if (!fout) {
        cout << "无法创建输出文件 /data/codes/code9/cai/15paper/out.txt" << endl;
        return 1;
    }

    // 定义学生数组
    Student students[100];
    int count = 0;

    // 读取并显示排序前的数据
    cout << "排序前的数据：" << endl;
    while (fin >> students[count]) {
        cout << students[count].name << " " << students[count].score << endl;
        count++;
    }
    fin.close();

    // 按成绩由高到低排序
    sort(students, students + count, Student::scoreCompare);

    // 将排序后的结果写入out.txt文件
    cout << "\n排序后的数据已保存到 out.txt 文件中：" << endl;
    for (int i = 0; i < count; i++) {
        fout << students[i] << endl;
        cout << students[i].name << " " << students[i].score << endl;
    }

    fout.close();
    return 0;
}