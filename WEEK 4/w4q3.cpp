#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    float price;
    bool isBooked;

public:
    // Constructor
    MovieTicket(string name, int seat, float p) {
        movieName = name;
        seatNumber = seat;
        price = p;
        isBooked = false;
    }

    // Destructor
    ~MovieTicket() {
        cout << "Ticket for seat " << seatNumber << " is removed from the system." << endl;
    }

    // Book the ticket
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket for seat " << seatNumber << " booked successfully!" << endl;
        } else {
            cout << "Seat " << seatNumber << " is already booked!" << endl;
        }
    }

    // Cancel the ticket
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket for seat " << seatNumber << " has been cancelled." << endl;
        } else {
            cout << "Seat " << seatNumber << " is not booked yet!" << endl;
        }
    }

    // Display ticket details
    void displayTicketDetails() const {
        cout << "Movie: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Price: $" << price << endl;
        cout << "Booking Status: " << (isBooked ? "Booked" : "Available") << endl;
        cout << "----------------------------" << endl;
    }
};

// Main function to demonstrate
int main() {
    // Creating multiple ticket objects
    MovieTicket ticket1("Avengers", 5, 12.5);
    MovieTicket ticket2("Avengers", 6, 12.5);

    // Booking and displaying
    ticket1.bookTicket();
    ticket1.displayTicketDetails();

    // Attempt to book again
    ticket1.bookTicket();

    // Cancel and display
    ticket1.cancelTicket();
    ticket1.displayTicketDetails();

    // Booking another ticket
    ticket2.bookTicket();
    ticket2.displayTicketDetails();

    return 0;
}
