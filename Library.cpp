#include "Library.h"

void Library::addBook(int id, string title, string author) {
    Book newBook(id, title, author);
    books.push_back(newBook);

    cout << "Book added!" << endl;
}

void Library::removeBook(int ID) {
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].getId() == ID) {
            books.erase(books.begin() + i);

            cout << "Book removed." << endl;
            return;
        }
    }

    cout << "Book not found." << endl;
}

void Library::borrow(int ID) {
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].getId() == ID) {

            if (books[i].getStatus() == "Available") {
                books[i].setStatus("Borrowed");

                cout << "You now have the book!" << endl;
            }
            else {
                cout << "Book already borrowed." << endl;
            }

            return;
        }
    }

    cout << "Book not found." << endl;
}

void Library::returnBook(int ID) {
    for (size_t i = 0; i < books.size(); i++) {
        if (books[i].getId() == ID) {

            if (books[i].getStatus() == "Borrowed") {
                books[i].setStatus("Available");

                cout << "Book returned!" << endl;
            }
            else {
                cout << "Book is already available." << endl;
            }

            return;
        }
    }

    cout << "Book not found." << endl;
}

void Library::showBooks() {
    if (books.empty()) {
        cout << "No books in library." << endl;
        return;
    }

    for (size_t i = 0; i < books.size(); i++) {
        books[i].showBook();

        cout << "------------------" << endl;
    }
}