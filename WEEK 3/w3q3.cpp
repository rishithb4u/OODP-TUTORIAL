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
    // Constructor
    Product(string id, string name, float p, int qty) {
        productID = id;
        productName = name;
        price = p;
        quantity = qty;
    }

    // Function to calculate total price
    float calculateTotalPrice() const {
        return price * quantity;
    }

    // Function to display product details
    void productDetails() const {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << calculateTotalPrice() << endl;
        cout << "-----------------------------" << endl;
    }
};

// Function to display all products in the cart
void displayCart(Product products[], int size) {
    for (int i = 0; i < size; ++i) {
        products[i].productDetails();
    }
}

// Main function to demonstrate
int main() {
    Product cart[3] = {
        Product("P001", "Laptop", 999.99, 1),
        Product("P002", "Mouse", 25.50, 2),
        Product("P003", "Keyboard", 45.75, 1)
    };

    displayCart(cart, 3);

    return 0;
}
