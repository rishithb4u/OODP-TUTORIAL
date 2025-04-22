#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productID;
    string productName;
    float price;
    int quantity;

public:
    // Default constructor
    Product() {
        productID = "000";
        productName = "Unnamed";
        price = 0.0;
        quantity = 0;
    }

    // Parameterized constructor
    Product(string id, string name, float p, int qty) {
        productID = id;
        productName = name;
        price = p;
        quantity = qty;
    }

    // Destructor
    ~Product() {
        cout << "Product [" << productID << "] removed from memory." << endl;
    }

    // Function to calculate total price
    float calculateTotalPrice() const {
        return price * quantity;
    }

    // Function to display product details
    void displayProductInfo() const {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << calculateTotalPrice() << endl;
        cout << "--------------------------" << endl;
    }
};

// Main function to demonstrate
int main() {
    // Create an array of products
    Product cart[3] = {
        Product("P101", "Laptop", 799.99, 1),
        Product("P102", "Headphones", 59.99, 2),
        Product("P103", "Mouse", 19.99, 3)
    };

    // Display all products in the cart
    for (int i = 0; i < 3; i++) {
        cart[i].displayProductInfo();
    }

    return 0;
}
