#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookID;
    string title;
    string author;
    float price;

public:
    // Default constructor
    Book() {
        bookID = "000";
        title = "Untitled";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string id, string t, string a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    // Function to display book info
    void displayBookInfo() const {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "--------------------------" << endl;
    }
};

// Demonstration
int main() {
    // Using default constructor
    Book book1;

    // Using parameterized constructor
    Book book2("B101", "The Great Gatsby", "F. Scott Fitzgerald", 15.99);
    Book book3("B102", "1984", "George Orwell", 12.50);

    book1.displayBookInfo();
    book2.displayBookInfo();
    book3.displayBookInfo();

    return 0;
}
