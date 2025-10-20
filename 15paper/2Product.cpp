#include <iostream>

using namespace std;

class Product {
protected:
    string name;
    int count;
    double price, total;
public:
    Product() {
        cin >> name >> count >> price;
    }

    void output() {
        cout << "name:" << name << "count:" << count << "price:" << price << "total:" << price * count << endl;
    };
};

class Watch : public Product {

    int year;
public:
    Watch() {
        cin >> year;
    }

    void output() {
        Product::output();
        cout << "year:" << year << endl;
    }
};

class Book : public Product {

    string author;
public:
    Book() {
        cin >> author;
    }

    void output() {
        Product::output();
        cout << "author:" << author << endl;
    }
};

int main() {
    Watch w;
    Book b;
    w.output();
    b.output();
    return 0;
}