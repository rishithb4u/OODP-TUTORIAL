#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string name;
    float price;
public:
    Book(string n, float p) : name(n), price(p) {}
    friend void book_price(Book b);
};

class Library {
public:
    void display(Book b) {
        book_price(b);
    }
};

void book_price(Book b) {
    cout << "Book Name: " << b.name << ", Price: $" << b.price << endl;
}

int main() {
    Book b("C++ Programming", 499.99);
    Library lib;
    lib.display(b);
    return 0;
}

