#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

struct Book {
    string title;
    string author;
    string ISBN;
    bool isIssued;
    Book* next;

    Book(string t, string a, string i){
        title = t;
        author = a;
        ISBN = i;
        isIssued = false;
        next = NULL;
        }
};
class Library {
private:
    Book* head;
    unordered_map<string, int> userBooks;
public:
    Library(){
        head = NULL;
    }
void addBook(string title, string author, string ISBN) {
        Book* newBook = new Book(title, author, ISBN);
        if (head == NULL) {
            head = newBook;
        } else {
            Book* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newBook;
        }
        cout << "Book added successfully!" << endl;
    }
    void removeBook(string ISBN) {
        if (head == NULL) {
            cout << "Library is empty!" << endl;
            return;
        }
        Book* temp = head;
        Book* prev = nullptr;
        if (temp != NULL && temp->ISBN == ISBN) {
            head = temp->next;
            delete temp;
            cout << "Book removed successfully!" << endl;
            return;
        }
        while (temp != NULL && temp->ISBN != ISBN) {
            prev = temp;
            temp = temp->next;
        }
            if (temp == NULL) {
            cout << "Book not found!" << endl;
            return;
        }
        prev->next = temp->next;
        delete temp;
        cout << "Book removed successfully!" << endl;
    }

    void searchBook(string title) {
        Book* temp = head;
        bool found = false;

        while (temp != NULL) {
            if (temp->title == title) {
                cout << "Book found!" << endl;
                cout << "Title: " << temp->title << endl;
                cout << "Author: " << temp->author << endl;
                cout << "ISBN: " << temp->ISBN << endl;
                cout << "Status: " << (temp->isIssued ? "Issued" : "Available") << endl;
                found = true;
                break;
            }
            temp = temp->next;
        }

        if (!found) {
            cout << "Book not found!" << endl;
        }
    }
    void issueBook(string ISBN, string user) {
        Book* temp = head;
        while (temp != NULL) {
            if (temp->ISBN == ISBN) {
                if (temp->isIssued) {
                    cout << "Book is already issued!" << endl;
                } else {
                    if (userBooks[user] >= 2) {
                        cout << "You cannot issue more than 2 books at a time!" << endl;
                        return;
                    }
                    temp->isIssued = true;
                    userBooks[user]++;
                    cout << "Book issued successfully to " << user << "!" << endl;
                }
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found!" << endl;
    }
    void displayBooks() {
        if (head == NULL) {
            cout << "Library is empty!" << endl;
            return;
        }
        Book* temp = head;
        while (temp != nullptr) {
            cout << "Title: " << temp->title << endl;
            cout << "Author: " << temp->author << endl;
            cout << "ISBN: " << temp->ISBN << endl;
            cout << "Status: " << (temp->isIssued ? "Issued" : "Available") << endl;
            cout << "-------------------------" << endl;
            temp = temp->next;
        }
    }
};
int main() {
    Library library;
    int choice;
    string title, author, ISBN, user;
        while (true) {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Display All Books" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter ISBN: ";
                getline(cin, ISBN);
                library.addBook(title, author, ISBN);
                break;

            case 2:
                cout << "Enter ISBN of the book to remove: ";
                cin.ignore();
                getline(cin, ISBN);
                library.removeBook(ISBN);
                break;

            case 3:
                cout << "Enter title of the book to search: ";
                cin.ignore();
                getline(cin, title);
                library.searchBook(title);
                break;

            case 4:
                cout << "Enter ISBN of the book to issue: ";
                cin.ignore();
                getline(cin, ISBN);
                cout << "Enter your name: ";
                getline(cin, user);
                library.issueBook(ISBN, user);
                break;

            case 5:
                library.displayBooks();
                break;

            case 6:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
