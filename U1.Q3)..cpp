#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    double price;

public:
    // Read book details
    void readDetails() {
        cout << "Enter Book ID    : ";
        cin >> bookID;
        cin.ignore();
        cout << "Enter Book Title : ";
        getline(cin, title);
        cout << "Enter Price      : Rs. ";
        cin >> price;
    }

    // Display book details
    void displayDetails() {
        cout << "\n+----------------------------------+\n";
        cout << "|         BOOK DETAILS             |\n";
        cout << "+----------------------------------+\n";
        cout << "  Book ID  : " << bookID  << "\n";
        cout << "  Title    : " << title   << "\n";
        cout << "  Price    : Rs. " << price << "\n";
        cout << "+----------------------------------+\n";
    }

    // Getter methods (arrow operator demo)
    int    getID()    { return bookID; }
    string getTitle() { return title;  }
    double getPrice() { return price;  }
};

int main() {

    // ── Dynamic memory allocation using pointer to object ──
    Book *ptr = new Book();

    // ── Access members via arrow operator ( -> ) ──
    cout << "===  Enter Book Details  ===\n";
    ptr->readDetails();

    // ── Display using pointer ──
    ptr->displayDetails();

    // ── Demonstrating individual access via arrow operator ──
    cout << "\n  Accessing members via pointer (->):\n";
    cout << "  ptr->getID()    = " << ptr->getID()    << "\n";
    cout << "  ptr->getTitle() = " << ptr->getTitle() << "\n";
    cout << "  ptr->getPrice() = Rs." << ptr->getPrice() << "\n";

    // ── Free dynamically allocated memory ──
    delete ptr;
    ptr = nullptr;

    cout << "\n  Memory released successfully.\n";

    return 0;
}